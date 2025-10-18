#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {12, 11, 13, 6, 5};
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift the element to the right
            j = j - 1; // Move to the previous element
        }
        arr[j + 1] = key; // Insert the key in the correct position
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Add a space for readability
    }

    return 0;
}
