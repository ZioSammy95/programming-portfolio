bool valore1 = true;
bool valore2 = false;
bool valore3 = false;
bool unoVeroDueFalsi = (valore1 && !valore2 && !valore3) || (!valore1 && valore2 && !valore3) || (!valore1 && !valore2 && valore3);
Console.WriteLine("Una delle variabili è vera e le altre due sono false? " + unoVeroDueFalsi);
