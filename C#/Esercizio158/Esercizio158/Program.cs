string[] nomi = { "Marco", "Francesca", "Samuele", "Simona", "Samuele" };
string nomeCercato = "Samuele";
int conteggio = 0;
for (int i = 0; i < nomi.Length; i++)
{
    if (nomi[i] == nomeCercato)
    {
        conteggio++;
    }
}
Console.WriteLine("Il nome " + nomeCercato + " compare " + conteggio + " volte nell'array.");