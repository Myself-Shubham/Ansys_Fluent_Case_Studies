### Numerical Investigation of Turbulent Incompressible Flow and Recirculation Dynamics in a Pipe Elbow and Cavity Assembly

**Summary** :
A 3D steady-state computational fluid dynamics (CFD) analysis was performed in **Ansys Fluent 2026 R1** to evaluate internal fluid flow behavior through a 
pipe/tap assembly. The model simulates incompressible liquid water flowing through the internal passage, resolving turbulent flow characteristics, 
bend recirculation, and cavity flow patterns.


### CFD Setup & Simulation Methodology
**1. Domain & Mesh Discretization**
* **Cell Count:** 107,676 cells (241,529 faces, 33,214 nodes).
* **Mesh Topology:** Mixed cells in the fluid domain and tetrahedral cells in the solid zone (`solid11`).
* **Quality Metrics:** Minimum orthogonal quality of **0.222** in the fluid domain (overall minimum **0.130**) and a maximum aspect ratio of **20.32**.

**2. Physical & Turbulence Modeling**
* **Solver:** 3D, steady, double-precision, pressure-based formulation.
* **Turbulence Model:** komega-SST (Shear Stress Transport) model to accurately capture near-wall shear and boundary layer separation around internal curvature.
* **Working Fluid:** Liquid Water (rho = 998.2 kg/m^3, mu = 0.001003 kg/m.s).

**3. Boundary Conditions & Numerical Schemes**
* **Inlet:** Velocity inlet normal to boundary at **10 m/s}$**, with **5%** turbulent intensity and a viscosity ratio of **10**.
* **Outlet:** Static pressure outlet at **$0 Pa gauge**.
* **Walls:** Stationary, no-slip standard walls.
* **Pressure-Velocity Coupling:** SIMPLE scheme.
* **Spatial Discretization:** Second-order pressure discretization with second-order upwind schemes for Momentum, Turbulent Kinetic Energy (k), and
  Specific Dissipation Rate (omega).


### Summary of What Was Done & Observations
* **Flow Dynamics:** Liquid enters through the main straight duct at 10 m/s and accelerates to a peak velocity of approximately **18.3 m/s** along the inner
  radius of the 90 deg elbow bend due to convective acceleration.
* **Recirculation Zones:** Pathlines and velocity contours show pronounced recirculating vortex structures within the upper vertical cavity/valve housing where
  flow separates from the main stream.
* **Convergence Behavior:** Continuity achieved the 10^{-3} convergence criterion, while velocity and turbulence residuals exhibited steady periodic
  oscillations near 1.4 * 10^{-3} - 2.5 * 10^{-3} across 2,000 iterations, indicating localized unsteady vortex shedding in the dead-end chamber.
