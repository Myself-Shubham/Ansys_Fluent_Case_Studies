**2D Steady State Simulation of Air aroung a Building Infrastructure :**

**Description :**

1) Simulation Type : 2D Steady State.
2) Flow Domain : non-deforming with solid zone deleted/removed as no energy eqn is solved throughout the simulation.
3) Behavior : showed usual behaviour and flow direction as expected, but got into error at the coarse cells, where **Boundary Layers** and adjacent **fluid cells** did not transitioned smoothly.

**Problems Incurred :**
1) Coarse mesh caused the velocity gradient to got skyrocketed in some low velocity regions.

**Future Scope :**
can be tried with high resolution mesh and Smooth **Boundary Layer-Cell zone** to ensure mass flux remains in usual limits to ensure conservation.
