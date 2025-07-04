DateTime ora = new DateTime(2023, 1, 1, 12, 0, 0);
int oreDaSottrarre = 2;
DateTime nuovaOra = ora.AddHours(-oreDaSottrarre);
Console.WriteLine("Nuova ora: " + nuovaOra);
