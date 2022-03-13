#include <iostream>
#include<conio.h>
using namespace std;

class A
{
private:
    int id=100;
    string name ="sakib";

public:
    friend class B;

};

class B
{
public:
    void display(A ob)
    {

        cout<<"my id: "<< ob.id << endl;
        cout<<"my name: "<< ob.name;
    }

};

int main()
{
    A ob1;
    B ob2;

    ob2.display(ob1);

    return 0;
}
