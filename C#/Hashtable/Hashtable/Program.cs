 using System;
 using System.Collections;

class Program
    {
        static void Main()
        {
            // Creazione della Hashtable
            Hashtable capoluoghi = new Hashtable();

            // Aggiunta delle coppie Regione - Capoluogo
            capoluoghi.Add("Abruzzo", "L'Aquila");
            capoluoghi.Add("Basilicata", "Potenza");
            capoluoghi.Add("Calabria", "Catanzaro");
            capoluoghi.Add("Campania", "Napoli");
            capoluoghi.Add("Emilia-Romagna", "Bologna");
            capoluoghi.Add("Friuli-Venezia Giulia", "Trieste");
            capoluoghi.Add("Lazio", "Roma");
            capoluoghi.Add("Liguria", "Genova");
            capoluoghi.Add("Lombardia", "Milano");
            capoluoghi.Add("Marche", "Ancona");
            capoluoghi.Add("Molise", "Campobasso");
            capoluoghi.Add("Piemonte", "Torino");
            capoluoghi.Add("Puglia", "Bari");
            capoluoghi.Add("Sardegna", "Cagliari");
            capoluoghi.Add("Sicilia", "Palermo");
            capoluoghi.Add("Toscana", "Firenze");
            capoluoghi.Add("Trentino-Alto Adige", "Trento");
            capoluoghi.Add("Umbria", "Perugia");
            capoluoghi.Add("Valle d'Aosta", "Aosta");
            capoluoghi.Add("Veneto", "Venezia");

            capoluoghi.Remove("Molise");


        // Stampa di tutti i capoluoghi
        foreach (DictionaryEntry entry in capoluoghi)
            {
                Console.WriteLine($"Regione: {entry.Key} - Capoluogo: {entry.Value}");
            }
        }
    }
