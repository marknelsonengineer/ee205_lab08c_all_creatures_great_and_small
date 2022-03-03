///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Mark Nelson <marknels@hawaii.edu>
/// @date   02_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <string>

using namespace std;

enum Gender {
    UNKNOWN_GENDER, MALE, FEMALE
};

class Animal {
protected:
   enum Gender gender ;
   string species ;
public:
    Gender getGender() const;

    const string &getSpecies() const;

    float getWeight() const;

protected:
    float weight ;  // -1 is Unknown.  All other weights must be > 0

public:
    Animal( string newSpecies );

    void setWeight(float weight);

public:
    void printInfo();
    bool isValid();
};
