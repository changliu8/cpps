#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> dq = {0,0,0,0,0};
    for(int i = 1;i<6;i++){
        if(i%2==0){
            dq.push_front(i);
        }
        else{
            dq.push_back(i);
        }
    }

    cout << dq.back() << endl;

    dq.pop_back();
    
    cout << dq.front() << endl;
    dq.pop_front();

    for(auto iter: dq){
        cout << iter << endl;
    }


}