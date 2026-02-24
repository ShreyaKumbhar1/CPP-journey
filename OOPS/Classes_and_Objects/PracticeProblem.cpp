/*🔹 Problem Statement
Design a class ATM such that:
pin → private
accountNumber → public
A function verifyPin(int enteredPin) that:
Checks if the entered PIN matches the actual PIN
Prints "Access Granted" or "Access Denied" */


#include <iostream>
using namespace std;

class ATM
{
private:
    int pin;
public:
    int accountNumber;
    void setPin(int p)
    {
        pin=p;
    }
    void verifyPin(int enteredPin)
    {
        if (enteredPin == pin){
            cout<<"Access Granted...!"<<endl;
        }
        else{
            cout<<"Access Denied...!"<<endl;
        }
    }
};

int main()
{
    ATM a;
    a.accountNumber=28150127;
    a.setPin(2214);
    int userPin;
    cin>>userPin;
    a.verifyPin(userPin);

    return 0;
}
