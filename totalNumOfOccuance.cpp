#include<iostream>
using namespace std;

// Function to find first occurrence
int firstOccurrence(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;  // keep searching left side
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

// Function to find last occurrence
int lastOccurrence(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;  // keep searching right side
        } else if (arr[mid] < key) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

// Function to calculate total number of occurrences
int totalOccurrences(int arr[], int n, int key) {
    int first = firstOccurrence(arr, n, key);
    if (first == -1) return 0;  // key not found
    int last = lastOccurrence(arr, n, key);
    return (last - first + 1);
}

int main() {
    int arr[5] = {1, 2, 3, 3, 5};
    int brr[6] = {2, 3, 3, 3, 4, 4};

    cout << "First occurrence of 3 in arr: " << firstOccurrence(arr, 5, 3) << endl;
    cout << "Last occurrence of 3 in arr: " << lastOccurrence(arr, 5, 3) << endl;
    cout << "Total occurrences of 3 in arr: " << totalOccurrences(arr, 5, 3) << endl;

    cout << "First occurrence of 3 in brr: " << firstOccurrence(brr, 6, 3) << endl;
    cout << "Last occurrence of 3 in brr: " << lastOccurrence(brr, 6, 3) << endl;
    cout << "Total occurrences of 3 in brr: " << totalOccurrences(brr, 6, 3) << endl;

    return 0;
}
