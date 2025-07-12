using System;

public class Utente
{
    // Campo interno visibile all'interno dello stesso assembly
    internal string username;

    // Metodo interno per validare la password
    internal bool ValidaPassword(string passwordInserita)
    {
        // Simulazione di una password corretta (esempio statico)
        string passwordCorretta = "1234";

        return passwordInserita == passwordCorretta;
    }
}
