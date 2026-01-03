#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char op;
    double result;

    cout<<"Simple Calculator...!"<<endl;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the operation that you want to perform(+,-,/,*): ";
    cin>>op;

    if(op=='+'){
        result=num1+num2;
    }
    else if(op=='-'){
        result=num1-num2;
    }
    else if(op=='/'){
        result=num1/num2;
    }
    else if(op=='*'){
        result=num1*num2;
    }
    else{
        cout<<"It is not valid...!"<<endl;
    }
    cout<<"Result: "<<result<<endl;

    cout<<"Thank You for visiting...!"<<endl;

    return 0;
}
