#include<iostream>
using namespace std;

class person
{
public:
    string name;
    int age;
    void display1(){
    cout<< name<<endl;
    cout <<age << endl;
    }

};
class student: public person
{

public:
    int id;
    display1();
    display2(){
         cout<< id<<endl;
    cout<< display1();
    }


};

int main(){
    student show;
    show.name="sakib";
    show.age=20;
    show.id =22;

    cout<< show.name <<endl<<show.age <<endl<<show.id;
    return 0;

}

