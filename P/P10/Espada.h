#ifndef ESPADA_H
#define ESPADA_H
#include "Item.h"

class Espada: public Item {
public:
    Espada() = default;
    Espada(const Espada& orig);
    virtual ~Espada();

    virtual std::string getDescripcion() const;

private:
};

#endif /* ESPADA_H */