#include<iostream>
using namespace std;
class myNum
{
public:
    int arr[6], i, elem;

};
int main()
{
    myNum obj;
    obj.arr;
    obj.elem;
    obj.i;
    cout<<"Enter 5 Array Elements: ";
    for(obj.i=0; obj.i<5; obj.i++)
        cin>>obj.arr[obj.i];

    obj.arr[obj.i] = obj.elem;
    cout<<"\nThe New Array is:\n";

    for(obj.i=0; obj.i<6; obj.i++)
        cout<<obj.arr[obj.i]<<"  ";
    cout<<endl;
    return 0;
}
