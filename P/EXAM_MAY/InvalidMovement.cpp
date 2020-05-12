/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InvalidMovement.cpp
 * Author: jgr97
 * 
 * Created on 9 de mayo de 2019, 12:16
 */

#include "InvalidMovement.h"

InvalidMovement::InvalidMovement(std::string error) : std::invalid_argument(error){
    
}

InvalidMovement::InvalidMovement(const InvalidMovement& orig) : std::invalid_argument(orig){
}

InvalidMovement::~InvalidMovement() noexcept{
}

