#include <iostream>
#include <string>

using std::string;

int main()
{
    for (int i = 0 ; i < 20 ; i++)
    {
     if( i % 2 != 0)
    {
      continue;
    }
        std::cout << i << std::endl;
    }

    

    std::cout << "sono uscito" << std::endl;


    return 0;
}