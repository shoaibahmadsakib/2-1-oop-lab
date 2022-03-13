#include<bits/stdc++.h>
using namespace std;
const int m = 3;
class Student{
public:
    int roll;
    string name;
    double mark;
    void getdata(){
         cout<<"Students Roll : "<<"\n";
         cin>>roll;
         cout<<"Students name : "<<"\n";
         cin>>name;
          cout<<"Students mark : "<<"\n";
         cin>>name;
    }
    void putdata(){
         cout<<"The Students roll number : "<<roll<<"\n";;
         cout<<"The students name : "<<name<<"\n";
         cout<<"The students mark : "<<mark<<"\n";
    }
};
class marks : public Student{
public:

    void calculate(){

         cout<<"Total Percentage : "<<mark<<"\n";
         if(mark>=80){
            cout<<"GRADE : A+"<<"\n";
         }else if(mark>75 && mark<80){
            cout<<"GRADE : A"<<"\n";
         }else{
            cout<<"GRADE : FAIL"<<"\n";
         }
    }
};
int main(){
    marks m1;

    m1.calculate();
    return 0;
}

