#include <iostream>
using namespace std;

class account
{
public:
    string account_ID;
    string username;

    void setbalance(int b)
    {
        balance=b;
    }

    double getbalance()
    {
        return balance;
    }

private:
    double balance;   //data hiding
    string password; //data hiding
};

int main()
{
    account acc1;
    acc1.account_ID="24UECS0317";
    acc1.username="shreyaa_28";
    cout<<acc1.account_ID<<endl;
    cout<<acc1.username<<endl;

   /* acc1.balance=2345678;   //This will throw an error
    cout<<acc1.balance<<endl;  */

    acc1.setbalance(234567);
    cout<<acc1.getbalance()<<endl;

    return 0;
}
