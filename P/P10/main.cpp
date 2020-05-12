#include <cstdlib>
#include <iostream>

#include "ContenedorItem.h"
#include <typeinfo>
#include "Inventario.h"
#include "Cofre.h"
#include "Item.h"
#include "Bloque.h"
#include "Espada.h"
#include "Filete.h"

using namespace std;

/**Inicializa el vector de items inicial
 * @pre v no contiene punteros inicializados
 * @post crea algunos objetos en el vector e inicializa el resto de elementos a 0
 * @return número de posiciones del vector con items creados*/
void inicializaItems(ContenedorItem<Item> &cont) {
    cont.mete(new Bloque(5));
    cont.mete(new Bloque(8));
    cont.mete(new Bloque());
    cont.mete(new Espada());
    cont.mete(new Filete());;
    
    
    
}

/**Libera los items del vector creados en memoria dinámica*/
void liberaItems(ContenedorItem<Item> cont) {
    for (int i = 1; i < cont.cuantosHay(); i++) {
        cont.saca(i);
    }

}

void visualiza(ContenedorItem<Item> &c, string name) {
    cout << "Contenido de "<< name << std::endl
            << "===================" << std::endl;
    for (int i = 1; i <= c.cuantosHay(); i++) {
        cout << i << ".- "
            << c.consulta(i).getDescripcion() << std::endl;
    }

}

/**@brief Probando los ContenedorItem
 * 
 */
int main(int argc, char** argv) {
    
    const int MAXITEMS = 10;
    ContenedorItem<Item> objetos(MAXITEMS);
    cout<<"Capacidad del contenedor inicial: "<<objetos.cuantosCaben()<<"\n";

    try {
        Cofre cofre;
        cofre.mete(new Espada());
        cofre.mete(new Filete());
        
        
        //Inicializamos algunos objetos de prueba
        inicializaItems(objetos);
        
        objetos.mete(&cofre);
        
        visualiza(objetos,"objetos");
        
        cout<<"\n\n";
        
        cout<<"Comprobamos el objeto 6 es un cofre. ¿Lo es? ";
        if(typeid(objetos.consulta(6))==typeid(cofre)){
            cout<<"Si, es un cofre.\n";
            visualiza(cofre,"cofre");
        }
        
        cout<<"\n\n";
        
        cout<<"Capacidad del contenedor final: "<<objetos.cuantosCaben()<<"\n";
        
    } catch (std::exception &e) {
        //Capturamos cualquier excepción que se haya podido escapar
        //En tiempo de desarrollo
        std::cerr << "Finalización del programa por excepción sin capturar: "
                << e.what() << std::endl;
    }
    return 0;
     
    
    
}