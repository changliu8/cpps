#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1 = "Hello,world!";
    string str2 = "ello";

    auto it = str1.find(str2);
    if(it!=str1.npos){
        cout << "202" << endl;
    }
    else{
        cout << "404" << endl;
    }
}