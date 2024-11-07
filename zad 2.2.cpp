#include <iostream>

int main() {
    int a, b;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << "Podano a jako: " << a << ", a b jako: " << b << "\n";
    
    std::cout << "Wiersz o dlugosci a: \n";
    for (int i = 0; i < a; i++)
    {
        std::cout << "*";
    }
    
    std::cout << "\n";

    std::cout << "Kolumna o dlugosci b: \n";
    for (int i = 0; i < b; i++)
    {
        std::cout << "* \n";
    }
    
    std::cout << "Prostakat o wymiarach a i b: \n";
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            std::cout << "*";
        }
        
        std::cout << "\n";
    }

    std::cout << "\n";
    std::cout << "Obwod prostokata o wymiarach a i b: \n";

    // top
    for (int i = 0; i < a; i++)
    {
        std::cout << "*";
    }

    std::cout << "\n";

    // middle
    for (int i = 0; i < b-2; i++)
    { 
        std::cout << "*";
        for (int k = 0; k < a-2; k++)
        {
            std::cout << " ";
        }
        std::cout << "* \n";
    }

    // bottom
    for (int i = 0; i < a; i++)
    {
        std::cout << "*";
    }

    std::cout << "\n";

    return 0;
}