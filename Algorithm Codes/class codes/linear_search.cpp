#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& array, int x) {
    for (int i = 0; i < array.size(); i++) {
        if (array[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> array = {2, 4, 0, 8, 6, 10, 23, 1, 9};
    int x = 23;

    int result = search(array, x); // Perform the search

    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }

    return 0;
}
