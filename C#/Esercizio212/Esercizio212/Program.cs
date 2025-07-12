Prodotto prodotto = new Prodotto();
prodotto.VisualizzaPrezzo();
decimal prezzoScontato = prodotto.CalcolaSconto(10);
Console.WriteLine("Prezzo scontato: " + prezzoScontato);