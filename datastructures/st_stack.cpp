#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> stack1;

    for(int i = 1;i<6;i++){
        stack1.push(i);
    }

    while(!stack1.empty()){
        cout << stack1.top() << endl;
        stack1.pop();
    } 

}