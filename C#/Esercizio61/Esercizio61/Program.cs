bool valore1 = true;
bool valore2 = false;
bool valore3 = true;
bool almenoDueVeri = (valore1 && valore2) || (valore1 && valore3) || (valore2 && valore3);
Console.WriteLine("Almeno due dei valori sono veri? " + almenoDueVeri);