#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'; //;
    for (int i = 0;i<N_ELEMENTS;i++) //nincs megadva az iterálás vége, milyen lépésközzel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i <N_ELEMENTS; i++) //egyszer fut le
    {
        std::cout << "Ertek:" <<b[i]<<std::endl; //; nincs érték kiiratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    double atlag; //double 
    for (int i = 0; i < N_ELEMENTS; i++)// N_ELEMENTS utáni vessző helyett ;
    {
        atlag += b[i]; //;
    }
    atlag =atlag/N_ELEMENTS; //atlag=atlag/N_ELEMENTS
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
