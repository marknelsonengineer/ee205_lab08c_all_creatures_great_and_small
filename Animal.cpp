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

#include "Animal.h"

void Animal::setWeight(float weight) {
   Animal::weight = weight;
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

bool Animal::isValid() {
   return false;
}

void Animal::printInfo() {

}

Animal::Animal(const string newSpecies) {
   gender = UNKNOWN_GENDER;
   weight = -1;
   species = newSpecies;
}
