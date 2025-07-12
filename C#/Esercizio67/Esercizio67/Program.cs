bool valore1 = true;
bool valore2 = false;
bool valore3 = false;
bool almenoDueVeriODueFalsi = (valore1 && valore2 && !valore3) || (!valore1 && valore2 && valore3) || (valore1 && !valore2 && valore3);
Console.WriteLine("Almeno due delle variabili sono vere o almeno due sono false? " + almenoDueVeriODueFalsi);