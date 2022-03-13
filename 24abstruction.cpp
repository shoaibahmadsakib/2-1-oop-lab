#include<iostream>
using namespace std;

class moblieUser
{

public:
    virtual void sendMessage()=0;
};
class Rahim: public moblieUser
{

public:
    void sendMessage()
    {
        cout<<"this is karim message;";
    }
};

class Karim: public moblieUser
{

public:
    void sendMessage()
    {
        cout<<"this is karim message;";
    }
};

int main()
{

    moblieUser *m;
    Rahim r;
    Karim k;
    m = &r;
    m->sendMessage();
    m = &k;
    m->sendMessage();
    return 0;
}
