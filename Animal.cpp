///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Mark Nelson <marknels@hawaii.edu>
/// @date   02_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"

void Animal::setWeight(float newWeight) {
   if(newWeight <= 0 ) {
      throw range_error( "Weight must be > 0" );
   }
   weight = newWeight;
}

Gender Animal::getGender() const {
   return gender;
}

const string &Animal::getSpecies() const {
   return species;
}

float Animal::getWeight() const {
   return weight;
}

void Animal::printInfo() const {
   cout << "Animal Fields" << endl;
   cout << "  Species = [" << getSpecies() << "]" << endl;
   cout << "  Weight = [" << getWeight() << "]" << endl;
   cout << "  Gender = [" << getGender() << "]" << endl;
}

Animal::Animal(const string newSpecies) {
   gender = UNKNOWN_GENDER;
   weight = -1;
   setSpecies( newSpecies );
}

/// To correct a gender... setGender( UNKNOWN_GENDER ) then set it to the corrected gender
void Animal::setGender(Gender newGender) {
   if(newGender == UNKNOWN_GENDER || gender != UNKNOWN_GENDER ) {
      throw logic_error( "Can't change an animal's gender once it's set" );
   }

   gender = newGender;
}

void Animal::setSpecies(const string &newSpecies) {
   if( newSpecies.empty()  ) {
      throw invalid_argument( "Species must be set" );
   }
   species = newSpecies;
}
