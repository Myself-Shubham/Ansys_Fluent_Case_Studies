#include "udf.h"

/* Define the origin of the radial suction if not 0,0 */
#define X_ORIGIN 0.0
#define Y_ORIGIN 0.0
#define V_SINK 1.0  /* Magnitude of the suction velocity in m/s */
#define MASS_SINK -10.0 /* kg/m3.s */

/* X-Momentum Source */
DEFINE_SOURCE(x_mom_source, c, t, dS, eqn)
{
    real x[ND_ND];
    real r, unit_x;
    real source;

    C_CENTROID(x, c, t);

    /* Calculate distance from origin */
    r = sqrt(pow(x[0] - X_ORIGIN, 2) + pow(x[1] - Y_ORIGIN, 2));

    if (r > 1e-6) /* Avoid division by zero at the origin */
    {
        unit_x = -(x[0] - X_ORIGIN) / r; /* Negative sign for "inward" */
        source = MASS_SINK * (V_SINK * unit_x);
    }
    else
    {
        source = 0.0;
    }

    dS[eqn] = 0; /* Derivative of source wrt velocity (optional linearization) */
    return source;
}

/* Y-Momentum Source */
DEFINE_SOURCE(y_mom_source, c, t, dS, eqn)
{
    real x[ND_ND];
    real r, unit_y;
    real source;

    C_CENTROID(x, c, t);

    r = sqrt(pow(x[0] - X_ORIGIN, 2) + pow(x[1] - Y_ORIGIN, 2));

    if (r > 1e-6)
    {
        unit_y = -(x[1] - Y_ORIGIN) / r; /* Negative sign for "inward" */
        source = MASS_SINK * (V_SINK * unit_y);
    }
    else
    {
        source = 0.0;
    }

    dS[eqn] = 0;
    return source;
}

/* Mass Source */
DEFINE_SOURCE(mass_source, c, t, dS, eqn)
{
    dS[eqn] = 0;
    return MASS_SINK;
}