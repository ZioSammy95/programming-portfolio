using System;
using System.Collections;
using System.Collections.Generic;
using Microsoft.VisualBasic;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace DataTime
{
    class Program
    {
        static void Main(string[] args)
        {
            
            DateTime dataLocal = DateTime.Now;
            DateTime dataProva = new DateTime(2021,2,15);


            
            Console.WriteLine(dataLocal.ToString("dddd, dd  MMMM"));
        }
    }
}