#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Comparator function to sort by finish time (second value of the pair)
bool compareByFinishTime(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<pair<int, int>> activities(n);

    cout << "Enter start times: ";
    for (int i = 0; i < n; i++) {
        cin >> activities[i].first;
    }

    cout << "Enter finish times: ";
    for (int i = 0; i < n; i++) {
        cin >> activities[i].second;
    }

    // Sort activities using the comparator function
    sort(activities.begin(), activities.end(), compareByFinishTime);

    int count = 1;  // Always pick the first activity
    int last_finish = activities[0].second;

    for (int j = 1; j < n; j++) {
        if (activities[j].first >= last_finish) {
            count++;
            last_finish = activities[j].second;
        }
    }

    cout << "Maximum number of activities: " << count << endl;
    return 0;
}
