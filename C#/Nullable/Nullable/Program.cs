using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel.Design;

namespace Nullable
{
    class Program
    {
        static void Main(string[] args)

        {
            int? prova = null;
            int? prova2 = prova;


            
            int  prova3 = prova ?? 5;
            Console.WriteLine(prova3);

           // bool? isMaschio = true;
           // if (isMaschio == true)
           //Console.WriteLine("sei maschio");
           //else if (isMaschio == false)
           //Console.WriteLine("sei femmina");
           //else Console.WriteLine("genere non specificato");
           
        }
    }
}