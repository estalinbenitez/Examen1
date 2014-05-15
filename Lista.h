#ifndef LISTA_H
#define LISTA_H
#include "Animal.h"
#include "Perro.h"
#include "Lora.h"
#include "Canario.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class Lista
{
    public:
        Animal*inicio;
        ofstream write;
        ifstream read;
        void agregar(Animal*animalito);
        void imprimir();
        void escribir();
        void leer();

        Lista();
        virtual ~Lista();
    protected:
    private:
};

#endif // LISTA_H
