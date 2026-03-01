#include <iostream>
using namespace std;

// O(log n): Binary search halves the search range each step.
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 23;
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "O(log n) example: found " << target << " at index " << mid << "\n";
            return 0;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << "O(log n) example: target not found\n";
    return 0;
}
