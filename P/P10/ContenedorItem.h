

#ifndef CONTENEDORITEM_H
#define CONTENEDORITEM_H

#include "Item.h"
#include <string>
#include "EmptyContainer.h"
#include "Cofre.h"

class Cofre;

template <typename T>
class ContenedorItem {
public:
    ContenedorItem();
    ContenedorItem(int cuantosCaben);
    ContenedorItem(const ContenedorItem& orig);
    virtual ~ContenedorItem();
    int cuantosCaben() const;
    int cuantosHay() const;
    virtual void mete(T *item) ;
    T& consulta(int cual);
    T* saca(int cual);
private:
    int _maxItems = 27; ///< Tamaño del vector de punteros
    T* *_items = nullptr; ///< Vector de punteros creado dinámicamente
    int _numItems = 0; ///< Primeras posiciones del vector ocupadas (máximo maxItems)
};

template <typename T>
ContenedorItem<T>::ContenedorItem(): ContenedorItem(27)
{
}

template <typename T>
ContenedorItem<T>::ContenedorItem(int cuantosCaben)
    :_maxItems(cuantosCaben)
    ,_numItems(0) {
    
    _items=new T*[cuantosCaben];
    for (int i = 0; i < cuantosCaben; i++) {
        _items[i]=nullptr;
    }
}

template <typename T>
ContenedorItem<T>::~ContenedorItem() {
    delete [] _items;
}

template <typename T>
int ContenedorItem<T>::cuantosCaben() const{
    return _maxItems;
}

template <typename T>
int ContenedorItem<T>::cuantosHay() const {
    return _numItems;
}

template <typename T>
void ContenedorItem<T>::mete(T* item) {
    if (!item) 
        throw std::invalid_argument ("[ContenedorItem::mete] Intento de asignar puntero 0");
    if (_numItems==_maxItems)
        throw std::out_of_range("[ContenedorItem::mete] No caben más elementos en el ContenedorItem");
    
    _items[_numItems++]=item;
    
    if (dynamic_cast<Cofre*>(item) != nullptr){
        Cofre *cofre = dynamic_cast<Cofre*>(item);
       _maxItems=_maxItems + cofre->cuantosCaben() - cofre->cuantosHay();
    }
}

template <typename T>
T& ContenedorItem<T>::consulta(int cual) {
    if (_numItems==0) 
        throw EmptyContainer("[ContenedorItem::consulta] El ContenedorItem está vacío");
    if (cual<=0 || cual >_numItems)
        throw std::out_of_range("[ContenedorItem::consulta] El elemento indicado no existe");
    return *_items[cual-1];
}

template <typename T>
T* ContenedorItem<T>::saca(int cual) {
    if (_numItems==0) 
        throw EmptyContainer("[ContenedorItem::saca] El ContenedorItem está vacío");
    if (cual<=0 || cual >_numItems)
        throw std::out_of_range("[ContenedorItem::mete] El elemento indicado no existe");
    T* elemento = _items[cual-1];
    _numItems--;
    if (_numItems>0)
        _items[cual-1]=_items[_numItems];
    return elemento;
}










#endif /* CONTENEDORITEM_H */