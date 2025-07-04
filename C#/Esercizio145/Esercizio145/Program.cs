static int GeneraNumeroCasuale(int minimo, int massimo)
{
    Random random = new Random();
    int numeroCasuale = random.Next(minimo, massimo + 1);
    return numeroCasuale;
}

// Esempio di utilizzo del metodo:
int numeroCasuale = GeneraNumeroCasuale(1, 100);
Console.WriteLine("Numero casuale generato: " + numeroCasuale);