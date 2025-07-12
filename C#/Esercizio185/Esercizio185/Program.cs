using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        string espressione = "(5 + 3) * (2 - (7 / 3))";
        Stack<char> parentesi = new Stack<char>();
        bool bilanciata = true;

        foreach (char c in espressione)
        {
            if (c == '(')
                parentesi.Push(c);
            else if (c == ')')
            {
                if (parentesi.Count == 0)
                {
                    bilanciata = false;
                    break;
                }
                parentesi.Pop();
            }
        }

        if (bilanciata && parentesi.Count == 0)
            Console.WriteLine("Le parentesi sono bilanciate.");
        else
            Console.WriteLine("Le parentesi NON sono bilanciate.");
    }
}
