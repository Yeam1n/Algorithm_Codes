#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + right / 2;

        if (a[mid] == key) {
            return mid; // Key found at index mid
        }
        else if (a[mid] < key) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Key not found
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Define a regular array with a fixed size
    int a[100]; // Assume a maximum size of 100 for demonstration
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform binary search
    int result = binarySearch(a, n, key);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

