#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[50], size,i,n,a;
    cout<<"Enter array size : ";
    cin>>size;
    for(i=0; i<size; i++)
    {
        cout<<"\nEnter arr Element :: ";
        cin>>arr[i];
    }
    for(int i=0; i<size; ++i)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j]<arr[j+1])
                swap(arr[j],arr[j+1]);  /// bubble sort algo
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}

