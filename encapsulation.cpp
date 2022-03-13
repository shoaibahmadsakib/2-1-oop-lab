#include<iostream>
using namespace std;

    class employee
    {

    private:
        int salary;

    public:
        int setSalary(int s)
        {
            salary =s;

        }
        int getSalary()
        {
            return salary;
        }



    };
int main()
{
    employee data;

    data.setSalary(4000);

    cout<< data.getSalary();
}

