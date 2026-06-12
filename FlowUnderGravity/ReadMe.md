**2D Transient Fluid-Structure Interaction (FSI) and Degrees of Freedom (DOF) Rigid Body Motion of Varied Geometries**

**Description** :
1) **Simulation Type** : 2D Transient (Time-Dependent) Fluid-Structure Interaction (FSI).
2) **Flow Domain** : Fluid mesh remains 'Deforming' across three bluff bodies: a cylinder, a square, and a triangle.
3) **Motion Mechanism** : Driven by a compiled C-script User-Defined Function (dofSimulation.c) utilizing Fluent's Six DOF (Degrees of Freedom) solver.
4) **Behavior** : The square and triangle freely translate and rotate dynamically in response to the aerodynamic dragging forces exerted by the fluid.

**Problems Incurred** :
1) **Severe Mesh Distortion** : As the square and triangle tilt and shift downstream, the velocity wakes become highly jagged, asymmetric, and unphysical.
2) **Dynamic Mesh Update Failure** : The localized grid elements surrounding the rotating sharp edges (especially on the square and triangle) are stretching
   excessively due to insufficient or unoptimized diffusion smoothing and remeshing parameters.
3) **Imminent Solver Crash** : The high cell skewness restricts proper cell volume updates.
