#include <iostream>
using namespace std;

// O(1): Constant time work regardless of n.
int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int index = 3; // fixed index
    cout << "O(1) example: arr[" << index << "] = " << arr[index] << "\n";

    return 0;
}
