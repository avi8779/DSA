#include<iostream>
using namespace std;

int productOfAllElement(int nums[], int n){
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= nums[i];
    }
    return product;
    
}

int main(){
    int nums[5] = {2,2,3,4,5};
    cout<<productOfAllElement(nums, 5);
    
}
