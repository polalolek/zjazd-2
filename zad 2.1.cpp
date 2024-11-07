#include <iostream>

int main() {
    int n;
    std::cout << "Podaj liczbe do jakiej liczymy ciag: \n";
    std::cin >> n;

    int wynik=0;

    for (int i = 1; i <= n; i++)
    {
        int suma=0;
        std::cout << "(";
        for (int j = 1; j <= i; j++)
        {
            suma += j;
            std::cout << j;
            if (j < i)
            {
                std::cout << "+";
            }
        }
        std::cout << ") = " << suma << '\n';
        wynik += suma;
    }
    
    std::cout << "Suma wszystkich ciagow = " << wynik;
    return 0;
}