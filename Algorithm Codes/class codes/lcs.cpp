#include <iostream>
#include <string>
using namespace std;

int LCS(string s1, string s2, int i, int j) {
    // Base case
    if (i == s1.length() || j == s2.length()) return 0;

    if (s1[i] == s2[j]) {
        return 1 + LCS(s1, s2, i + 1, j + 1);
    }

    int option1 = LCS(s1, s2, i + 1, j);
    int option2 = LCS(s1, s2, i, j + 1);

    return max(option1, option2);
}

int main() {
    string s1, s2;

    // Take input
    cout << "Enter String1: ";
    cin >> s1;

    cout << "Enter String2: ";
    cin >> s2;

    int lcsans = LCS(s1, s2, 0, 0);

    cout << "Longest Common Subsequence: "<< lcsans << endl;

    return 0;
}
