#include<iostream>
using namespace std;

int main ()
{
    int array[11], n, x, pos;

    // Getting the size of the array
    cout<<"Enter the size of the array: ";
    cin>>n;

    // Getting the array elements
    cout<<"Enter the elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    // Getting the value to be inserted and the position
    cout<<"Enter the value you want to insert: ";
    cin>>x;
    cout<<"Enter the position (0-indexed) where you want to insert the value: ";
    cin>>pos;

    // Shift elements to the right from the specified position
    for (int i = n; i > pos; i--)
    {
        array[i] = array[i-1];
    }

    // Insert the value at the specified position
    array[pos] = x;
    n++; // Increment the size of the array

    // Display the array elements
    cout<<"Array elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}
