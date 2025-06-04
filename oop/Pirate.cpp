#include "Pirate.h"

Pirate::Pirate() : Person(10,20,1,3){};

void Pirate::display() const{
    std::cout << "[ Pirate ]" << std::endl;
    Person::display();
}