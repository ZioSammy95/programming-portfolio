using System;
using System.Reflection.Metadata.Ecma335;

class Program
{
    static void Main(string[] args)
    {
        int risultato = FaiSomma(20, 20);
        double result = FaiSomma(20, 20.0, 20.0);
        Console.WriteLine($"il risultato è {risultato}");


    }
    static int FaiSomma(int num1, int num2)
    {
        return num1 + num2;

    }
    static double FaiSomma(int num1, double num2)
    {
        return num1 + num2;
    }
    static double FaiSomma(double num1, double num2, double num3)
    {  
        return num1 + num2;

    }


}