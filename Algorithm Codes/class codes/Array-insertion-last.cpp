#include<iostream>
using namespace std;

int main()
{
    int array[10], n, i, x;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    // Input array elements
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    cout << "Enter the value to add at the end: ";
    cin >> x;
    
    // Add the new value at the end of the array
    array[n] = x;
    n++;  // Increase the size of the array by 1
    
    // Output the updated array elements
    for (i = 0; i < n; i++)  // Corrected loop condition
    {
        cout << array[i] << endl;
    }
    
    return 0;
}
