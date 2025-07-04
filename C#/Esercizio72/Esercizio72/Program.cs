Console.Write("Inserisci una lettera: ");
char lettera = char.ToLower(Console.ReadKey().KeyChar);
if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u')
{
    Console.WriteLine(" La lettera è una vocale.");
}
else
{
    Console.WriteLine(" La lettera è una consonante.");
}