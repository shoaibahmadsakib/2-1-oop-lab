// A simple example using an object pointer.
#include <iostream>
using namespace std;
class My_Class
{
    int num;
public:
    void setNum(int val)
    {
        num = val;
    }
    void getNum();
};

void My_Class::getNum()
{
    cout << num << "\n";
}

int main()
{
    My_Class ob, *p; // declare an object and pointer to it

    ob.setNum(1555); // access ob directly
    ob.getNum();

    p = &ob; // assign p the address of ob
    p->getNum(); // access ob using pointer

    //second pointer declare;
    My_Class obj2, *q;

    obj2.setNum(444);
     obj2.getNum();
    q = &obj2;
    q->getNum();
    return 0;
}
