#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N után _
    std::cout << '1-100 ertekek duplazasa'  //; hiányzik illetve "" használat
    for (int i = 0;)  //for ciklus hiányos és hibás
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //for ciklus hibás
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]  //; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
