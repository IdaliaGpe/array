#include<iostream>

void print(int&); //Blueprint o prototipo

int main()
{
    int numbers[6]{1,2,3,4,5,6};

    //std::cout << "Array memory: " << &numbers << std::endl;
    //std::cout << "Array memory: " << *numbers << std::endl;

    //const char* myString{"hello array"};

    //Recorrer

    /*for(int i = 0; i < 6; i++)
    {
        std::cout << &numbers[i] << "\t";
    }*/

    /*for(int i = 0; i < 6; i++)
    {
        std::cout << numbers + i << "\t";
    }*/

    /*for(int n : numbers)
    {
        std::cout << &n << "\t";
    }*/

    /*for(auto n : numbers)
    {
        std::cout << n << "\t";
    }*/

    /*int i{};

    bool read{i < 6};

    while (read)
    {
        std::cout << numbers[i] << "\t";
        i++;
    }*/
    
    int n1{5}; //Stack

    //Pasar por valor o preferencia

  int n2{n1};//copiar n1 en un nuevo campo de memoria dentro de n2

    int& n3{n1};// esto es un valor por referencia, estas creando literalmente no una varabile normal, si una direccion en memoria de algo


    std::cout << "n1 value: " << n1 << std::endl;
    std::cout << "n2 value: " << n2 << std::endl;
    std::cout << std::endl;
    n2++;

    std::cout << "n1 value: " << n1 << std::endl;
    std::cout << "n2 value: " << n2 << std::endl;
    std::cout << std::endl;

    std::cout << "memmory n1: " << &n1 << std::endl;
    std::cout << "memmory n2: " << &n2 << std::endl;

    std::cout << std::endl;

    std::cout << "memmory n1: " << &n1 << std::endl;
    std::cout << "memmory n3: " << &n3 << std::endl;
    std::cout << std::endl;

    std::cout << "n1 value: " << n1 << std::endl;
    std::cout << "n3 value: " << n3 << std::endl;
    std::cout << std::endl;

    n3++;
    n1++;

    std::cout << "n1 value: " << n1 << std::endl;
    std::cout << "n3 value: " << n3 << std::endl;
    
    std::cout << std::endl;

    print(n1);

    std::cin.get();
    
    return 0;
}

void print(int& number)
{
    std::cout << "number value: " << number << std::endl;
    std::cout << "number memmory: " << &number << std::endl;
}