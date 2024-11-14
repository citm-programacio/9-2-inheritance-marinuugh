// inheritance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Building 
{
protected:
    string name;

public:
    Building() {};

    Building(string _n) 
    {
        name = _n;
    }
    string getName() 
    {
        return name;
    }
};

class Warehouse : public Building
{
private:
    int wood, rocks, wheat;

public:
    Warehouse(string _n, int _wood, int _rocks, int _wheat) 
    {
        name = _n;
        wood = _wood;
        rocks = _rocks;
        wheat = _wheat;
    }

    void printResources() 
    {
        std::cout << "WAREHOUSE: " << name << endl;
        std::cout << "Wood: " << wood << endl;
        std::cout << "Rocks: " << rocks << endl;
        std::cout << "Wheat: " << wheat << endl;
    }
};

class House : public Building 
{
private:
    int floors, inhabitants, servants;

public: 
    House(string _n, int _floors, int _inhabitants, int _servants) 
    {
        name = _n;
        floors = _floors;
        inhabitants = _inhabitants;
        servants = _servants;
    }

    void printHouse() 
    {
        std::cout << "HOUSE: " << name << endl;
        std::cout << "Floors: " << floors << endl;
        std::cout << "Inhabitants: " << inhabitants << endl;
        std::cout << "Servants: " << servants << endl;
    }
};

class Temple : public Building 
{
private: 
    string god;
    int priests;

public:
    Temple(string _n, string _god, int _priests) 
    {
        name = _n;
        god = _god;
        priests = _priests;
    }

    void printTemple() 
    {
        std::cout << "TEMPLE: " << name << endl;
        std::cout << "God: " << god << endl;
        std::cout << "Priests: " << priests << endl;
    }
};

int main()
{
    Warehouse warehouse("Calvus' Warehouse", 1070, 830, 945);
    House house("Caecilia's House of Horrors", 2, 7, 10);
    Temple temple("Great Temple to Cloacina", "Cloacina", 25);

    warehouse.printResources();
    std::cout << endl;

    house.printHouse();
    std::cout << endl;

    temple.printTemple();
    std::cout << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
