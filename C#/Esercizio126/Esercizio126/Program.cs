Dictionary<string, string> dizionario = new Dictionary<string, string>()
{
    { "NL", "Paesi Bassi" },
    { "IT", "Italia" },
    { "ES", "Spagna" },
    { "DE", "Germania" }
};
foreach (KeyValuePair<string, string> coppia in dizionario)
{
    Console.WriteLine("Chiave: " + coppia.Key + ", Valore: " + coppia.Value);
}