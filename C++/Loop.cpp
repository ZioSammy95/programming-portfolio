#include <iostream>
#include <string>

using std::string;

int main()
{
  const string colonne = "ABCDEFG";
  const int RIGHE_MAX = 10;
    
    
    for (int colonna = 0 ; colonna < colonne.length() ; colonna++)
    {
           
        for ( int riga = 1 ; riga <= RIGHE_MAX ; riga++)
        {
            std::cout << colonne[colonna] << riga << std::endl;
        }
        
        }

    

    return 0;
}