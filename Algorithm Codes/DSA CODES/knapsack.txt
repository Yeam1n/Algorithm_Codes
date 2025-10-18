#include <bits/stdc++.h>
using namespace std;

float p[100], w[100];
float x[100];
//bags capacity ar item koyta thakbe
void knapsack(int m, int n){
    for (int i = 1; i < n; i++) {
        int maX = i;
        for (int j = i + 1; j <= n; j++) {
            if (p[j] / w[j] > p[maX] / w[maX]) {
                maX = j;
            }
        }
        swap(p[maX], p[i]);
        swap(w[maX], w[i]);
    }

    //memset(x, 0, sizeof(x)); // Important fix
    int u = m;//u jhuri er capacity
    int i;
    for (i = 1; i <= n; i++) {
        if (w[i] > u)//sort korar por 1 number weight total weight u theke boro kinaaa
            break;
        x[i] = 1;
        u= u-w[i];
    }
    if (i <= n) {
        x[i] = (float)u / w[i];
    }
}

void profit_calculation(int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++)
        sum += x[i] * p[i];
    cout << sum;
}
//number n of items
int main() {
    int n,m;

    // freopen("in.txt", "r", stdin); // Uncomment for file input
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the capacity of the knapsack: ";
    cin >> m;

    for (int i = 1; i <= n; i++) {
        cout << "Enter profit and weight of item " << i << ": ";
        cin >> p[i] >> w[i];
    }

    knapsack(m, n);

    cout << "After Sorting by unit profit:\nProfits: ";
    for (int i = 1; i <= n; i++) cout << p[i] << " ";
    cout << "\nWeights: ";
    for (int i = 1; i <= n; i++) cout << w[i] << " ";
    cout << "\nItems taken (fractions): ";
    for (int i = 1; i <= n; i++) cout << x[i] << " ";
    cout << "\nTotal profit: ";
    profit_calculation(n);

    return 0;
}
