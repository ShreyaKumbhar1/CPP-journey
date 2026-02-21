#include <iostream>
using namespace std;

class teacher
{
private:
    double salary;
public:

    string name;
    string dept;
    string subject;

    //Non parameterized
    teacher()  //constructor
    {
        cout<<"I am a Non-Parameterized Constructor...!"<<endl;
        dept="CSE";
    }

    //parameterized constructor
    teacher(string n, string d, string s)
    {
        cout<<"I am a Parameterized Constructor"<<endl;
        name=n;
        dept=d;
        subject=s;
    }

    // Copy Constructor
    teacher(teacher &originalObject)  // pass by reference
    {
        cout<<"I am a custom copy constructor"<<endl;
        this->name=originalObject.name;
        this->dept=originalObject.dept;
        this->subject=originalObject.subject;
    }
    void getinfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
    }

};

int main()
{
    /* teacher t1("Shreya", "CSE", "CPP");
    t1.getinfo(); */

    teacher t1;
    t1.name="Shreya";
    t1.dept="CSE";
    t1.subject="CPP";

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;
    cout<<" "<<endl;

    cout<<"The below output is given by using copy constructor."<<endl;
    teacher t2(t1); // Custom Copy Constructor (or) Default when custom is not created
    t2.getinfo();


    return 0;
}

