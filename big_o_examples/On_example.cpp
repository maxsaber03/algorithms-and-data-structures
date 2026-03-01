#include <iostream>
using namespace std;

// O(n): Single pass through the data.
int main() {
    int arr[] = {4, 7, 1, 9, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "O(n) example: sum = " << sum << "\n";
    return 0;
}
