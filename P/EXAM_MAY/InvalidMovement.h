/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InvalidMovement.h
 * Author: jgr97
 *
 * Created on 9 de mayo de 2019, 12:16
 */

#ifndef INVALIDMOVEMENT_H
#define INVALIDMOVEMENT_H

#include <stdexcept>

class InvalidMovement : std::invalid_argument{
public:
    InvalidMovement(std::string error);
    InvalidMovement(const InvalidMovement& orig);
    virtual ~InvalidMovement() noexcept;
private:

};

#endif /* INVALIDMOVEMENT_H */

