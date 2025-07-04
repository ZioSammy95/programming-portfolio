using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        string input = "programmare";
        Dictionary<char, int> frequenze = new Dictionary<char, int>();

        foreach (char c in input)
        {
            if (frequenze.ContainsKey(c))
                frequenze[c]++;
            else
                frequenze[c] = 1;
        }

        foreach (var coppia in frequenze)
        {
            Console.WriteLine($"Lettera '{coppia.Key}': {coppia.Value} volte");
        }
    }
}
