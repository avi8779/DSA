#include<iostream>
using namespace std;

int duplicateArray(int num[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans ^ num[i];
    }

    for(int i = 0; i<n; i++){
            ans = ans^i;
    }
    return ans;
}

int main(){
    int num[5] = {1,3,4,1,2};

    int duplicate = duplicateArray(num, 5);

    cout<<"The duplicate element is "<<duplicate;
}