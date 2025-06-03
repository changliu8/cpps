#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void quick(vector<int>* nums,int l, int r){
    if(l>=r){
        return;
    }

    int pivot = l + (rand() % (r-l+1));
    int pivot_value = (*nums)[pivot];

    swap((*nums)[l],(*nums)[pivot]);

    int i = l+1;
    int j = r;

    while(true){
        while(i<j && (*nums)[i] <= pivot_value){
            i++;
        }
        while(i<j && (*nums)[j] >= pivot_value){
            j--;
        }
        if (i==j){
            break;
        }
        swap((*nums)[i],(*nums)[j]);
    }

    int new_pivot;
    if ((*nums)[i]<(*nums)[l]){
        new_pivot = i;
    }
    else{
        new_pivot = i-1;
    }
    swap((*nums)[l],(*nums)[new_pivot]);
    quick(nums,l,new_pivot-1);
    quick(nums,new_pivot+1,r);

}

int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    quick(&nums,0,nums.size()-1);

    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
}