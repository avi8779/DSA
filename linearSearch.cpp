#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i = 0; i<size; i++){

        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<"Enter the element to search for "<<endl;
    int key;
    cin>>key;

    bool found = search(arr, 5, key);

    if(found){
        cout<<"Key is present"<<endl;
    }else{
        cout<<"Key is absent"<<endl;
    }
    return 0;


}