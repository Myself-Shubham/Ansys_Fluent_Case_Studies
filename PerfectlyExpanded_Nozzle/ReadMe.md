# README: Perfectly Expanded Nozzle Simulation

This project contains a 2D steady-state Computational Fluid Dynamics (CFD) simulation of a perfectly expanded nozzle flow. The simulation was conducted using Ansys Fluent 2025 R2 to analyze compressible flow characteristics.

## Simulation Setup
* **Solver**: 2D, Double Precision, Density-Based Implicit.
* **Time**: Steady-state.
* **Viscous Model**: SST k-omega turbulence model.
* **Material**: Air, modeled as an ideal gas.
* **Energy**: Heat transfer enabled.

## Geometry and Mesh
* **Mesh Type**: Triangular (Tri) cells.
* **Mesh Size**: 38,803 cells, 58,488 faces, and 19,686 nodes.
* **Mesh Quality**: Minimum Orthogonal Quality of 0.6578 and a Maximum Aspect Ratio of 3.73.

## Boundary Conditions
* **Inlet**: Gauge Total Pressure of 792,840 Pa and Total Temperature of 300 K.
* **Outlet**: Gauge Pressure of 101,325 Pa with a backflow total temperature of 300 K.
* **Walls**: Stationary, no-slip walls with zero heat flux (adiabatic).

## Convergence and Results
* **Convergence**: The simulation reached convergence after 6,930 iterations.
* **Residuals**: All monitored residuals (continuity, x-velocity, y-velocity, energy, k, and omega) successfully met the convergence criteria of 1e-03.
* **Performance Data**:
    * **Net Mass Flow Rate**: -39.71697 kg/s.
    * **Maximum Mach Number**: 2.17.
    * **Maximum Velocity Magnitude**: 543 m/s.
    * **Maximum Dynamic Pressure**: 337,000 Pa.

---
**Analyst**: ShubhamR  
**Date**: 4/3/2026
