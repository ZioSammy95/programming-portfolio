using System;
using System.Collections;
using System.Runtime.CompilerServices;

class Program
{


    static void Main(string[] args)
    {
        int[] arrayInteri = { 1, 2, 3, 10, 5, 6, 7 };
        ArrayList prove = new ArrayList() { 10, 20, 30.0, 40, "oreor" };


        for (int i = 0; i < prove.Count; i++)
        {
            Console.WriteLine(prove[i]);
        }
    }
           
    }
