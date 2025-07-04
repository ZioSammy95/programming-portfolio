using System;
using System.Collections.Generic;

class Program
{
    static void Main(string[] args)
    {
        Stack<int> inventario = new Stack<int>();
        inventario.Push(10);
        inventario.Push(50);
        inventario.Push(80);
        inventario.Push(90);
        inventario.Push(100);
        inventario.Pop();
        
        
        foreach(int item in inventario)
        {
            Console.WriteLine(item);
        }
        inventario.Pop();
        foreach (int item in inventario)
        {
            Console.WriteLine(item);
        }


    }
}
