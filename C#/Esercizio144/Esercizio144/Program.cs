static int CalcolaValoreAssoluto(int numero)
{
    int valoreAssoluto = Math.Abs(numero);
    return valoreAssoluto;
}

// Esempio di utilizzo del metodo:
int numero = -5;
int valoreAssoluto = CalcolaValoreAssoluto(numero);
Console.WriteLine("Il valore assoluto di " + numero + " è: " + valoreAssoluto);