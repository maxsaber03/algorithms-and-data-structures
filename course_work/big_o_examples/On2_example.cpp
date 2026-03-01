#include <iostream>
using namespace std;

// O(n^2): Nested loops over the input (pair comparisons).
int main() {
    int arr[] = {3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int comparisons = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            // Example "work": compare pairs
            if (arr[i] > arr[j]) {
                // do nothing; comparison is the point
            }
        }
    }

    cout << "O(n^2) example: pair comparisons = " << comparisons << "\n";
    return 0;
}
