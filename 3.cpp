#include<iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout<<"Enter the no. of elements you want to enter = ";
    cin>>n;
    cout<<"Enter Elements of Array = ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout<<"Sorted Array = ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
