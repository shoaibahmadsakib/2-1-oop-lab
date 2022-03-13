#include<iostream>
using namespace std;
int main(){
int arr[40];
int i,j,size,temp;

cout<<"inter element of array";
cin>>size;


cout<<"enter elements of array";

for(i=0; i<size; i++){
cin>>arr[i];

}
//sorting
for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(arr[j]<arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
//short order is
cout<<"element of an array"<<endl;
for(i=0;i<size;i++){
    cout<<arr[i]<<endl;

}
return 0;
}
