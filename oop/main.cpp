#include "Pirate.h"
#include "Hero.h"
#include <vector>


std::vector<Pirate*>* initPirates(int size) {
    std::vector<Pirate*>* result = new std::vector<Pirate*>;
    for (int i =0;i<size;i++){
        result->push_back(new Pirate());
    }
    return result;
}

int main(){
    Hero* h1 = new Hero();
    int size = 50;
    std::vector<Pirate*>* pirates = initPirates(size);

    for(int i =0;i<size;i++){
        while(true){
            h1->attack((*pirates)[i]);
            (*pirates)[i]->display();
            if((*pirates)[i]->getHealth()<=0){
                std::cout << "Pirate " << i+1 << " is done!" << std::endl;
                break;
            }
            (*pirates)[i]->attack(h1);
            if(h1->getHealth()<=0){
                h1->display();
                std::cout << "Hero is DONE!!!!!!!!!" << std::endl;
                std::cout << "\033[31mRemaining pirate: " << size-(i+1) << "\033[0m" << std::endl;
                return 0;
            }
            h1->display();
        }
    }
}
