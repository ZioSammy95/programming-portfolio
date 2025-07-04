Console.Write("Inserisci una stringa: ");
string input = Console.ReadLine();
int indice = 0;
do
{
    Console.WriteLine(input[indice]);
    indice++;
} while (indice < input.Length);
