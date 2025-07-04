using System;

public class esercizio19
{
	public esercizio19()
	{

        enum GiorniSettimana
    {
        Lunedi,
        Martedi,
        Mercoledi,
        Giovedi,
        Venerdi,
        Sabato,
        Domenica
    }

    GiorniSettimana giorno = GiorniSettimana.Mercoledi;
    Console.WriteLine("Il giorno selezionato è: " + giorno);
	}
}
