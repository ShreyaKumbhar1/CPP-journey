#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin>>a;
    cin>>b;
    string c=a+b;
    cout<<a.size()<<" ";
    cout<<b.size()<<endl;
    cout<<c<<endl;
    char temp;
    temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;


    return 0;
}
