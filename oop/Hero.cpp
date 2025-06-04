#include "Hero.h"


Hero::Hero() : Person(100,150,5,10){};

void Hero::display() const {
    std::cout << "[ Hero ] " << std::endl;
    Person::display();
}


