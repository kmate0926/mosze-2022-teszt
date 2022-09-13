#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //;
    for (int i = 0;) //nincs megadva az iterálás vége, milyen lépésközzel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //egyszer fut le
    {
        std::cout << "Ertek:" //; nincs érték kiiratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag; //double 
    for (int i = 0; i < N_ELEMENTS, i++)// N_ELEMENTS utáni vessző helyett ;
    {
        atlag += b[i] //;
    }
    atlag /= N_ELEMENTS; //atlag=atlag/N_ELEMENTS
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
