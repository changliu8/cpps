#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    for (int i =1;i<6;i++){
        q.push(i);
    }


    //add element
    q.push(6);

    //check the element at the front
    cout << q.front() << endl;
    //pop the element at the front
    q.pop();

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

}