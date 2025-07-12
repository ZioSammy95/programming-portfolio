Console.Write("Inserisci un numero: ");
int numero = int.Parse(Console.ReadLine());
int conteggioCifre = 0;
do
{
    numero /= 10;
    conteggioCifre++;
} while (numero > 0);
Console.WriteLine("Il numero contiene " + conteggioCifre + " cifre.");