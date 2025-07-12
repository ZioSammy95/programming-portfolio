using System;

public class Persona
{
    // Variabile privata
    private string nome;

    // Proprietà pubblica per l'età
    public int Eta { get; set; }

    // Costruttore pubblico per inizializzare "nome"
    public Persona(string nomeIniziale)
    {
        nome = nomeIniziale;
    }

    // Metodo pubblico per stampare il nome
    public void StampaNome()
    {
        Console.WriteLine("Il nome è: " + nome);
    }

    // Metodo privato per calcolare l'anno di nascita
    private int CalcolaAnnoDiNascita()
    {
        int annoCorrente = DateTime.Now.Year;
        return annoCorrente - Eta;
    }

    // Metodo pubblico per mostrare l'anno di nascita
    public void MostraAnnoDiNascita()
    {
        int anno = CalcolaAnnoDiNascita();
        Console.WriteLine("Anno di nascita: " + anno);
    }
}
