#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[50], size, search,i;
    bool found;
    int pos =0;
    cout<<"Enter array size : ";
    cin>>size;
    for(i=0; i<size; i++)
    {
        cout<<"\nEnter arr Element :: ";
        cin>>arr[i];
    }
    cout<<"\nenter a search number ::";
    cin>>search;
    for(i=0; i<size; i++)
    {
        if(search == arr[i])
        {
            found =true;
            pos = i+1;
            cout<<"\n present and position is::"<<pos;
            break;

        }
        else
        {
            found =false;
        }
    }
    if(found == false){
        cout<<"not found";
    }


}

