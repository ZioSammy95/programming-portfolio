static int CalcolaQuadrato(int numero)
{
    int quadrato = numero * numero;
    return quadrato;
}

// Esempio di utilizzo del metodo:
int numero = 7;
int quadrato = CalcolaQuadrato(numero);
Console.WriteLine("Il quadrato di " + numero + " è: " + quadrato);