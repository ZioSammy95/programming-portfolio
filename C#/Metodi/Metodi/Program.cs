using System;
using System.Reflection.Metadata.Ecma335;

class Program
{
    static void Main(string[] args)
    {
        int risultato = FaiSomma(20, 20);
        Console.WriteLine($"il risultato è {risultato}");


    }
    static int FaiSomma(int num1, int num2)
    {
        return num1+num2;

    }

   


}








