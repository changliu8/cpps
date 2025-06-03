#include <vector>
#include <iostream>

using namespace std;

void merge(vector<int>& nums, int l, int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;

    vector<int> l1(n1,0);
    vector<int> l2(n2,0);

    for(int i =0;i<n1;i++){
        l1[i] = nums[l+i];
    }
    for(int i =0;i<n2;i++){
        l2[i] = nums[m+i+1];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i<n1 && j <n2){
        if(l1[i]<l2[j]){
            nums[k] = l1[i];
            i+=1;
        }
        else{
            nums[k] = l2[j];
            j+=1;
        }
        k+=1;
    }

    while(i<n1){
        nums[k] = l1[i];
        i+=1;
        k+=1;
    }

    while(j<n2){
        nums[k] = l2[j];
        j+=1;
        k+=1;
    }
}

void mergeSort(vector<int>& nums, int l, int r){
    if (l>=r){
        return;
    }
    int m = l + (r-l)/2;
    mergeSort(nums, l,m);
    mergeSort(nums, m+1,r);
    merge(nums,l,m,r);

}

int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    mergeSort(nums,0,nums.size()-1);

    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
}