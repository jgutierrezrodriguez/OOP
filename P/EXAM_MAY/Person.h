/**
 * @file Person.h
 * @author algarcia
 *
 * @date 29 de marzo de 2017, 20:02
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>

/**
 * @brief
 */
class Person
{
   private:
      std::string _name;
      char _gender;

   public:
      Person ( std::string nName="", char nGender='-' );
      Person ( const Person& orig );
      virtual ~Person ( );
      void setGender ( char gender );
      char getGender ( ) const;
      void setName ( std::string name );
      std::string getName ( ) const;
};

#endif /* PERSON_H */
