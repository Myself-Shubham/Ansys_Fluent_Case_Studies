#include "udf.h"

DEFINE_SDOF_PROPERTIES(shape_properties, prop, dt, time, dtime)
{
    /* * IMPORTANT: Set properties in SI units (kg, m)
     * Change these values based on the table provided:
     * Square: Mass = 27.0, I_z = 0.0225
     * Circle: Mass = 27.0, I_z = 0.0430
     * Triangle: Mass = 27.0, I_z = 0.0104
     */
    
    real mass = 27.0; 
    real I_z = 0.0225; // Change this value per shape

    prop[SDOF_MASS] = mass;
    prop[SDOF_IXX] = 1.0e-6; // Dummy value for 2D
    prop[SDOF_IYY] = 1.0e-6; // Dummy value for 2D
    prop[SDOF_IZZ] = I_z;

    /* Print to console to verify loading */
    printf("6DOF: Mass = %g, Izz = %g\n", prop[SDOF_MASS], prop[SDOF_IZZ]);
}