#ifndef FILETE_H
#define FILETE_H

#include "Item.h"

class Filete: public Item {
public:
    Filete() = default;
    Filete(const Filete& orig);
    virtual ~Filete();

    virtual std::string getDescripcion() const;

private:

};

#endif /* FILETE_H */