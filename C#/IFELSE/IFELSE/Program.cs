using System;
    
    class Program
    {
        static void Main(string[] args) 
        {
        int numero = 16;

        if (numero % 2 == 0)
        {
            Console.WriteLine("il numero è pari");
            if (numero > 10)
            {
                Console.WriteLine("il numero è pari o maggiore di 10");
            }
        }    
        else
        {
            Console.WriteLine("il numero è pari ma minore di 10");
        }

            Console.Read();
    }

}
