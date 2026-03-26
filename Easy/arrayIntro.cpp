#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    for(int i = 0; i<size; i++){
       cout<< arr[i]<< " ";
    }
}

int main(){
    
    int third[2] = {10, 12};
    printArray(third, 2);
}