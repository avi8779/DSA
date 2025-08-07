#include <iostream>
using namespace std;

void swapAlternative(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {5,4,3,2,1};

    swapAlternative(arr, 6);
    swapAlternative(brr, 5);
    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}
