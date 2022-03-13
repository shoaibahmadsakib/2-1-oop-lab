#include<iostream>
#include<string>
using namespace std;

class student
{
public:
    string name;
    int roll;

    string schoolName;

};
int main()
{
    student myObj;
    myObj.name ="sakib";
    myObj.roll=20;
    myObj.schoolName="zilla";


    //another object
    student anotherStudent;
    anotherStudent.name ="hasan";
    anotherStudent.roll =22;
    anotherStudent.schoolName ="polich";

    //print object

    cout<<"student name"<<myObj.name<<"\n";

    cout<<"student roll"<<myObj.roll<<"\n";
    cout<<"student school name"<<myObj.schoolName<<"\n";

    cout<<"student name"<<anotherStudent.name<<"\n";

    cout<<"student roll"<<anotherStudent.roll<<"\n";
    cout<<"student school name"<<anotherStudent.schoolName<<"\n";




    return 0;
}

