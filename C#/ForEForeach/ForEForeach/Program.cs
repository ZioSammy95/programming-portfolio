using System;

class Program
{
    static void Main(string[] args)
    {
        for (int i = 0; i < 5; i++)
        {
            Console.WriteLine(i);
        }

        string[] nomi = { "samuele", "luca", "marco", "anna" };
        foreach (string nome in nomi)
        {

            Console.WriteLine(nome);
        }

    }
}