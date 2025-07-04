#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>
#include "Funzioni.hpp"

using namespace std;


int main()

{
    ofstream outputFile("prova.txt", ios::app);
  //  std::this_thread::sleep_for(std::chrono::seconds(2));
    outputFile << "ciao sto scrivendo con ios::out";
    outputFile.close();




//if (remove("prova.txt")== 0){
//      cout << "File eliminato con successo." << endl;
//   }else{
//     cout << "Errore nell'eliminazione del file." << endl;
 //   }
//if (inputFile.is_open()) 
//{
// string line;
// while (getline(inputFile, line)) 
// {
//      cout << line << std::endl;
// }   
//      inputFile.close();
//}

//ofstream outputFile("");
// if (outputFile.is_open()) 
// {
//      cout << "File creato con successo." << std::endl;
//}else
//{
//        cout << "Errore nella creazione del file." << std::endl;
//}
    return 0;

}