#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
void selection_sort(vector<int>&arr) {
    int i;
    int n=arr.size();
    for (int i=0;i<n;i++)
    {
        int nn=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[nn])  // Fixed comparison: should be arr[j] < arr[nn]
            {
                nn=j;
            }
        }
        //if(nn!=i)
        {
            /* int temp=arr[i];
            arr[i]=arr[nn];
            arr[nn]=temp;
            */
            swap(arr[i], arr[nn]);
        }
    }
}
int main()
{
    int n;
    cin>>n;  // Fixed input operator: changed '>=' to '>>'
    vector<int>arr(n);
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];  // Fixed input operator: changed '>=' to '>>'
    }
    selection_sort(arr);  // Fixed function call: removed space in 'selection sort'
    for (int i=0;i<n;i++)  // Fixed variable name: changed 'I' to 'i'
    {
        cout<<arr[i]<<" ";  // Fixed output: changed '<-' to '<<' and removed extra symbols
    }
    cout<<endl;  // Properly placed endl
    return 0;
}
