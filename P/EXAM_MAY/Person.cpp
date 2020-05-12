/**
 * @file Person.cpp
 * @author algarcia
 *
 * @date 29 de marzo de 2017
 */

#include "Person.h"

Person::Person ( std::string nName, char nGender ): _name (nName),
                                                    _gender (nGender)
{ }

Person::Person ( const Person& orig ): _name (orig._name), _gender (orig._gender)
{ }

Person::~Person ( )
{ }

void Person::setGender ( char gender )
{
   this->_gender = gender;
}

char Person::getGender ( ) const
{
   return _gender;
}

void Person::setName ( std::string name )
{
   this->_name = name;
}

std::string Person::getName ( ) const
{
   return _name;
}


