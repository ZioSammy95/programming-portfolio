using System;
using System.Collections;

class Program
{
    static void Main()
    {
        ArrayList lista = new ArrayList();

        lista.Add(5);
        lista.Add("ciao");
        lista.Add(3.14);

        Console.WriteLine("Contenuto della lista:");
        foreach (var item in lista)
        {
            Console.WriteLine(item);
        }

        int primoNumero = (int)lista[0];
        Console.WriteLine($"Il primo numero + 10 è: {primoNumero + 10}");
    }
}
