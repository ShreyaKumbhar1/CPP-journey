#include <iostream>
using namespace std;

int main()
{
    char color [20];
    char name [30];
    char occupation [30];
    char noun [20];
    char verb [20];
    char gender [20];
    char store [20];

    cout<<"Enter a color: ";
    cin>>color;
    cout<<"Enter any name: ";
    cin>>name;
    cout<<"Enter any occupation: ";
    cin>>occupation;
    cout<<"Enter any noun: ";
    cin>>noun;
    cout<<"Enter a verb: ";
    cin>>verb;
    cout<<"Enter any gender: ";
    cin>>gender;
    cout<<"Enter a store name: ";
    cin>>store;

    cout<<name<<" was very hardworking "<<occupation<<"."<<endl;
    cout<<"His hair were "<<color<<"."<<endl;
    cout<<"He had a bad habit of stealing "<<noun<<" from "<<store<<"."<<endl;
    cout<<"His favorite activity was "<<verb<< " with "<<gender<<"s."<<endl;


    return 0;
}
