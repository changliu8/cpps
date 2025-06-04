#include "Person.h"

class Hero : public Person{
public:
    Hero();
    void display() const override;
};