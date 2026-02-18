#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;
public:
    //properties/attributies
    string name;
    string dept;
    string sub;

    //methods/member fucntions
    void changedept(string new_dept)
    {
        dept = new_dept;
    }

    //setter
    void setSalary(int s)
    {
        salary = s;
    }

    //getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name="shreya"; //public property
    t1.dept="CSE";   //public property
    t1.sub="CPP";   //public property
    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.sub<<endl;
    t1.setSalary(25000); //private property
    cout<<t1.getSalary();

    return 0;
}
