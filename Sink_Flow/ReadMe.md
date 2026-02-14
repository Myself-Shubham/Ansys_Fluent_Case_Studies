Sink Flow Visualisation (along with formation of pressure regions and other disturbences).

Description : Modeled Sink Flow using "Source Terms Option" under Cell Zone Conditions. Parameters, Mass Flow Rate, X Momentum, Y Momentum, were used to have the Flow.

Problems Incurred : 
1) Needed to do new Setup, as changing Named Expressions' names made the Fluent to Stop, saying "Abnormal Exit".
2) When tried to open with already written case and data files, it opened with NO MESH. When replaced, popup as, interpreted, "There is issue with the Mesh", So tried with new BC as mention in the corresponding Section.
3) Starting, Setup of Physics went Wrong, leading to 'floating point exception'.
4) The troubleshooting been done with starting x and y momentum values from 0 [N / m3 s].

{Tried a .UDF for for assigning each cell in the Sink, a unique X and Y Momentum values to have Radially Inward Flow at the Sink.}
