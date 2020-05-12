/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MutantTeam.cpp
 * Author: jgr97
 * 
 * Created on 6 de abril de 2019, 20:10
 */

#include <iostream>
#include <stdexcept>
#include <sstream>

#include "MutantTeam.h"

MutantTeam::MutantTeam(): MutantTeam("---","---")
{
}

MutantTeam::MutantTeam(string _name, string _base)
    : name(_name),
    base(_base),
    numMembers(0) {

    for (int i = 0; i < _MAX_MEMBERS_; i++) {
        members[i] = NULL;
    }
}

MutantTeam::MutantTeam(const MutantTeam& orig)
    : name(orig.name),
    base(orig.base),
    numMembers(orig.numMembers) {
    
    for (int i = 0; i < _MAX_MEMBERS_; i++) {
        members[i] = orig.members[i];
    }
}

MutantTeam::~MutantTeam() {
    if (numMembers > 0) {
        for (int i = 0; i < numMembers; i++) {
            members[i] = NULL;
        }
    }
}

MutantTeam& MutantTeam::setName(string _name) {
    name=_name;
    
    return (*this);
}

MutantTeam& MutantTeam::setBase(string _base) {
    base = _base;
    
    return (*this);
}

string MutantTeam::getName() const {
    return name;
}

int MutantTeam::getNumMembers() const {
    return numMembers;
}


string MutantTeam::getBase() const {
    return base;
}

void MutantTeam::addMutant(Mutant *m) {
    if (numMembers == _MAX_MEMBERS_) {
        throw std::length_error("MutantTeam::addMutant: the team has no more space");
    }

    members[numMembers] = m;
    numMembers++;
}

Mutant* MutantTeam::getMutant(int pos) {
    if ((pos < 0) || (pos >= numMembers)) {
        throw std::invalid_argument("MutantTeam::getMutant: wrong value");
    }

    return members[pos];
}

Mutant* MutantTeam::MutantOUT(int pos) {
    Mutant *aux;

    if ((pos < 0) || (pos >= numMembers)) {
        throw std::invalid_argument("MutantTeam::MutantOUT: wrong value");
    }

    aux = members[pos];
    members[pos] = NULL;

    if (numMembers > 1) {
        members[pos] = members[numMembers - 1];
        members[numMembers - 1] = 0;
    }

    numMembers--;

    return  aux;
}

string MutantTeam::toCSV() {
    std::stringstream aux;

    aux << name << ";"
            << base;

    for (int i = 0; i < numMembers; i++) {
        aux << ";" << members[i]->toCSV();
    }

    return  aux.str();
}

MutantTeam& MutantTeam::operator=(const MutantTeam& orig) {
    if (this != &orig) {
        name = orig.name;
        base = orig.base;
        numMembers = orig.numMembers;

        for (int i = 0; i < _MAX_MEMBERS_; i++) {
            members[i] = orig.members[i];
        }
    }

    return  *this;
}