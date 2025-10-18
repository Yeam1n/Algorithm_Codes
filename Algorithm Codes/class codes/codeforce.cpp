#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);  // Speeds up I/O (optional)

    int t;
    cin >> t;
    while (t--) {
        int n, h;
        cin >> n >> h;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort in descending order
        sort(arr.begin(), arr.end(), greater<int>());

        int strongest = arr[0];
        int second_strongest = arr[1];
        int combined = strongest + second_strongest;

        int moves = 0;
        if (h <= strongest) {
            moves = 1;
        } else {
            int full_cycles = h / combined;
            int remaining = h % combined;

            moves = full_cycles * 2;

            if (remaining > 0) {
                if (remaining <= strongest) {
                    moves += 1;
                } else {
                    moves += 2;
                }
            }
        }

        cout << moves << "\n";  // Using "\n" instead of endl for speed
    }
    return 0;
}
