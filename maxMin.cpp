#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n){
    int mini = INT_MAX;

    for(int i = 0; i<n; i++){
        mini = min(mini, num[i]);
    }
    return mini;
}

int getMax(int num[], int n){
    int maxi = INT_MIN;

    for(int i = 0; i<n; i++){
        maxi = max(maxi, num[i]);
    }

    return maxi;
}

int main(){
    int size;
    cout<<"Enter the Size of Array"<<endl;
    cin>>size;

    int num[100];
    cout<<"Enter the Array of Elements"<<endl;
    for(int i = 0; i<size; i++){
        cin>>num[i];
    }

    cout<<"The Maximum Value is "<<getMax(num, size)<<endl;
    cout<<"The Minimum Value is "<<getMin(num, size)<<endl;

}