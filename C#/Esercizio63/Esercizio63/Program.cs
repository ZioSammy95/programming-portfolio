bool valore1 = true;
bool valore2 = false;
bool unoVeroUnoFalso = (valore1 && !valore2) || (!valore1 && valore2);
Console.WriteLine("Uno dei valori è vero e l'altro è falso? " + unoVeroUnoFalso);