DateTime dataNascita = new DateTime(1995, 6, 2);
DateTime oggi = DateTime.Today;
int eta = oggi.Year - dataNascita.Year;

if (oggi < dataNascita.AddYears(eta))
{
    eta--;
}

Console.WriteLine("Età: " + eta + " anni.");