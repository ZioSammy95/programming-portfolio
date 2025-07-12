DateTime data = new DateTime(2023, 1, 1);
int giorniDaAggiungere = 10;
DateTime nuovaData = data.AddDays(giorniDaAggiungere);
Console.WriteLine("Nuova data: " + nuovaData);