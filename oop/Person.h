#pragma once
#include <iostream>

int random_gen(int min, int max);


class Person {
protected:
    int health;
    int attack_damage;

public:
    Person(int min_hp, int max_hp, int min_ad, int max_ad);
    
    int getHealth();
    int getAttackDamage();
    void setHealth(int new_health);
    void attack(Person* enemy);

    virtual void display() const;
    virtual ~Person() = default;
};
