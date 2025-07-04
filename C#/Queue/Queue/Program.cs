using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        Queue<string> persone = new Queue<string>();
        persone.Enqueue("Samuele");
        persone.Enqueue("Anna");
        persone.Enqueue("Marco");
        persone.Enqueue("Luca");
        persone.Enqueue("Qwerty");
        Console.WriteLine(persone.Peek());
        persone.Dequeue();
        Console.WriteLine(persone.Peek());
        
        while (persone.Count > 0)
        {
            Console.WriteLine(persone.Dequeue());
        }


    }
}
