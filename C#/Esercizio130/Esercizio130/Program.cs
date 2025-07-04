int[] numeri = { 1, 3, 5, 7, 9 };
int valoreCercato = 5;
bool trovato = false;
foreach (int numero in numeri)
{
    if (numero == valoreCercato)
    {
        trovato = true;
        break;
    }
}
if (trovato)
{
    Console.WriteLine("Il valore è stato trovato nell'array.");
}
else
{
    Console.WriteLine("Il valore non è presente nell'array.");
}