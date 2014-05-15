#include "Lista.h"

Lista::Lista()
{
    inicio=NULL;



}

Lista::~Lista()
{
    //dtor
}


//Funcion que agrega ah la lista

void Lista::agregar(Animal* animalito){

    if(inicio!=NULL){
            Animal*temp=inicio;
            while(temp->sig!=NULL){
                temp=temp->sig;
            }
                temp->sig=animalito;
        }else{
            inicio=animalito;
        }


}
//Funcion Imprimir
void Lista::imprimir(){

    Animal*tmp=inicio;
    while(tmp!=NULL){
        cout<<tmp->tipo<<" "<<tmp->edad<<" "<<tmp->nombre<<" "<<endl;
        tmp=tmp->sig;
    }
}

void Lista::escribir(){

    write.open("Listas.txt");

    cout<<"Escribiendo Datos en Archivo"<<endl;
    Animal*tmp=inicio;
     while(tmp!=NULL){
    write<<tmp->tipo<<" "<<tmp->edad<<" "<<tmp->nombre<<" "<<endl;

        tmp=tmp->sig;
    }

    write.close();
}

void Lista::leer(){
    read.open("Listas.txt");

    cout<<"Leyendo Lista Del Archivo"<<endl;
    string str;
    string edad;
    string nombre;

    read.seekg(0);

    while(read>>str>>edad>>nombre){

        int e=atoi(edad.c_str());


        if(str=="Perro")
            agregar(new Perro(e,nombre));
        if(str=="Canario")
            agregar(new Canario(e,nombre));
        if(str=="Lora")
            agregar(new Lora(e,nombre));


    }


    read.close();
}




