using System;

class Program
{
    static void Main(string[] args)
    {
        int eta = 18;
        string nome = "Samuele";

        switch (eta)
        {
            case 18:
                if (nome == "Samuele")
                {
                    Console.WriteLine("Samuele maggiorenne");
                }
                    Console.WriteLine("maggiorenne");
                    break;
                case 20:
                        Console.WriteLine("ventenne");
                        break;
                    case 30:
                        Console.WriteLine("la vecchiaia avanza");
                        break;
                    default:
                        Console.WriteLine("non so che età tu abbia");
                        break;
                    }
                }
}
    