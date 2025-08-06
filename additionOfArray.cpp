#include <iostream>
using namespace std;

int addition(int num[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += num[i];
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[100];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "The addition of array elements is: " << addition(num, size) << endl;

    return 0;
}
