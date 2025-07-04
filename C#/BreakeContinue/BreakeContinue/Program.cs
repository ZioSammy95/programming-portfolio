using System;

class Program
{
    static void Main(string[] args)
    {
        for (int i = 0; i < 5; i++)
        {
            if (i == 3) continue;

            {
                Console.WriteLine(i);
            }
        }
        Console.Read();
    }
}