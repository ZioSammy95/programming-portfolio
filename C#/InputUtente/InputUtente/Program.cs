using System;

Console.WriteLine("Inserisci numero 1");
string numero1 = Console.ReadLine();
int num1 = 0;

try
{
    num1 = int.Parse(numero1);
}
catch (FormatException)
{
    Console.WriteLine("Errore di formato: inserisci un numero valido");
} catch (OverflowException)
{
    Console.WriteLine("il numero non deve essere long");
} catch (ArgumentNullException)
{
    Console.WriteLine("l'argomento non può essere nullo");
} finally
{
    Console.WriteLine("io lo scrivo a prescindere");
}

Console.WriteLine(num1 + 2);

Console.Read();
