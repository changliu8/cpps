#include <iostream>
#include <set>

using namespace std;

//pass by reference
void pure_insert(set<int> &set1){
    set1.insert(100);
}

void pure_insert(set<int> *set1){
    set1->insert(100);
}



int main(){
    set<int> set1 = {1,2,3,4,5,6,7,8,8,8,8,8};

    //add 9 into the set
    set1.insert(9);

    //remove 9 in the set
    set1.erase(9);

    //find
    auto it = set1.find(2);
    if (it != set1.end()){
        cout << "202" << endl; 
    }
    else{
        cout << "404" << endl;
    }

    //accessing the 3rd element
    cout << "3rd element is : " << *next(set1.begin(),2) << endl;

    //pass by reference
    pure_insert(set1);


    //multiple way for traversing
    // 1st 
    for (auto it : set1){
        cout << it << endl;
    }
    // 2nd
    for (auto it = set1.begin();it!=set1.end();it++){
        cout << *it << " ";
    }
    cout << endl;

}