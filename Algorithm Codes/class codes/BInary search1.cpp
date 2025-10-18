#include <iostream>
#include <vector>
using namespace std;

// Function to perform binary search on a vector
int binarySearch(const vector<int>& a, int key) {
    int left = 0, right = a.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Prevent overflow

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

    vector<int> a(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(a, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the vector." << endl;
    }

    return 0;
}

