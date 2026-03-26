#include<iostream>
#include<climits>
using namespace std;


int secondLargestNo(int arr[], int n){
    int largest = arr[0];
    int secondLargest = 0;

    for(int i = 0; i<n; i++){
        if(largest < arr[i]){
            secondLargest = largest;
            largest = arr[i];
        }else if(secondLargest < arr[i] && largest != arr[i]){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
 int main(){
    int arr[100];
    int n;

    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the Element of Array:";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The Second Largest No is"<<secondLargestNo(arr, n)<<endl;
 }
