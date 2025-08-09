#include <iostream>
using namespace std;

int unique(int num[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = ans ^ num[i];
    }
    return ans;
}


int main() {
    int num[7] = {1, 2, 2, 3, 1, 4, 4};

    int uniqueElement = unique(num, 7);
    cout << "The unique element is: " << uniqueElement << endl;
  

    return 0;
}
