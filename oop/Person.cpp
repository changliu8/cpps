#include "Person.h"
#include "random"

int random_gen(int min, int max){
    std::random_device rd;                      // Non-deterministic seed
    std::mt19937 gen(rd());                     // Mersenne Twister engine
    std::uniform_int_distribution<> dist(min, max); // Uniform distribution

    return dist(gen);
}

Person::Person(int min_hp,int max_hp,int min_ad,int max_ad){
        this->health = random_gen(min_hp,max_hp);
        this->attack_damage = random_gen(min_ad,max_ad);
};

int Person::getHealth(){
    return health;
}

int Person::getAttackDamage(){
    return attack_damage;
}

void Person::setHealth(int new_health){
    health = new_health;
}

void Person::attack(Person* enemy){
    enemy->setHealth(enemy->getHealth()-attack_damage);
}

void Person::display() const{
    std::cout << "Health: " << health << ", Attack Damage: " << attack_damage << std::endl;
}