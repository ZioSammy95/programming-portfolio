using System.Globalization;

DateTime now = DateTime.Now;
string nomeGiorno = now.ToString("dddd", new CultureInfo("it-IT"));
Console.WriteLine("Giorno della settimana: " + nomeGiorno);