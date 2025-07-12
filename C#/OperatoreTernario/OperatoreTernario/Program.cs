using System;
using System.ComponentModel.Design;
using System.Runtime.CompilerServices;

class Program
{
    static void Main(string[] args)
    {
        string nome;
        int numero = 8;
        nome = numero % 2 != 0 ? "dispari" : (numero < 10 ? "pari minore 10" : "pari maggiore 10");

        if (numero % 2 == 0) nome = "dispari";
        else
        {
            if (numero < 10) nome = "pari minore 10";
            else nome = "pari maggiore 10";
        }
            Console.WriteLine(nome);


        Console.Read();
        }
}
