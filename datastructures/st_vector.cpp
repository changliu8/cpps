#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findOrNot(vector<int> &vec1, int num){
    auto it = find(vec1.begin(),vec1.end(), num);

    if (it != vec1.end()){
        cout << "found" << endl;
    }
    else{
        cout << "404" << endl;
    }

}


int main(){

    vector<int> vec1 = {1,2,100,4,5,6,7,8,9,10,3};

    // remove the last
    vec1.pop_back();
    // add to last
    vec1.push_back(11);
    //insert to given index
    vec1.insert(vec1.begin()+1,11);
    //delete an element
    vec1.erase(find(vec1.begin(),vec1.end(),10));
    //sort vector
    sort(vec1.begin(),vec1.end());
    //sort the vector in descending
    // 1st way
    // ----------------------------------------------
    // |                                            |
    // |                                            |
    // | sort(vec1.begin(),vec1.end(),greater<>())  |
    // |                                            |
    // ----------------------------------------------
    // 2nd way
    // ----------------------------------------------
    // |                                            |
    // |                                            |
    // | sort(vec1.begin(),vec1.end())              |
    // | reverse(vec.begin(),vec1.end())            |
    // |                                            |
    // ----------------------------------------------

    //vector<int>* vec_pointer = &vec1;

    //find
    findOrNot(vec1,10);
    findOrNot(vec1,11);


    //sort
    sort(vec1.begin(),vec1.end());

    for(int i = 0;i<vec1.size();i++){
        cout << vec1[i] << ",";
    }
    cout << endl;
    //descending order
    sort(vec1.begin(),vec1.end(),greater<>());

    for(int i = 0;i<vec1.size();i++){
        cout << vec1[i] << ",";
    }
    cout << endl;

}