#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string>* enumerate(string str){
    vector<string> *result = new vector<string>();
    for(int i = 1;i<str.length();i++){
        result->push_back(str.substr(i,str.length()-i)+str.substr(0,i));
    }
    return result;

}

int main(){

    string str = "ABCDE";

    vector<string> *result = enumerate(str);

    for (auto iter : *result){
        cout << iter << endl;
    }

}