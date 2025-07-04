using Esercizio203;

class Program
{
    static void Main()
    {
        Animale a = new Animale();
        a.Verso();  // Output: L'animale fa un verso.

        Cane c = new Cane();
        c.Verso();  // Output: Il cane abbaia.

        Animale ac = new Cane();
        ac.Verso();  // Output: Il cane abbaia. (polimorfismo)
    }
}