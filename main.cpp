//#include <iostream>

#include "Animal.h"

int main() {
   // std::cout << "Welcome to All Creatures Great and Small!" << std::endl;

   Animal myFirstAnimal = Animal( "Felis catus" );
   myFirstAnimal.setGender( MALE );
   myFirstAnimal.setWeight( 19 );  // @todo Refactor to include Unit of Measure
   myFirstAnimal.printInfo();

   return 0;
}
