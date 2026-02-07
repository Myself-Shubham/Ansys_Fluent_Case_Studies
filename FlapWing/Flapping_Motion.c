#include "udf.h"

/* UDF for Constant Speed Oscillation between -45 and +45 degrees */
DEFINE_CG_MOTION(oscillate_rect, dt, vel, omega, time, dtime)
{
    /* Reset velocities */
    NV_S(vel, =, 0.0);
    NV_S(omega, =, 0.0);

    /* Define Parameters */
    real speed_deg_s = 4.0;              /* Speed of 4 degrees per second */
    real amplitude_deg = 45.0;           /* UPDATED: Amplitude set to 45 degrees */
    real speed_rad_s = speed_deg_s * M_PI / 180.0;
    
    /* Calculate Period T = 4 * Amplitude / Speed */
    /* For 45 deg amplitude at 4 deg/s, the period is now 45 seconds */
    real period = (4.0 * amplitude_deg) / speed_deg_s; 
    
    /* Relative time within the current cycle */
    real t_cycle = fmod(time, period);

    /* Logic for Constant Speed Oscillation (Triangular Wave Profile) */
    /* Phase 1: 0 to +45 degrees */
    if (t_cycle <= (period / 4.0)) 
    {
        omega[2] = speed_rad_s;
    }
    /* Phase 2: +45 down to -45 degrees */
    else if (t_cycle > (period / 4.0) && t_cycle <= (3.0 * period / 4.0)) 
    {
        omega[2] = -speed_rad_s;
    }
    /* Phase 3: -45 back up to 0 degrees */
    else 
    {
        omega[2] = speed_rad_s;
    }

    /* Note: omega[2] is rotation around the Z-axis for 2D/3D setups */
}