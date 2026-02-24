/* 📌 Problem Statement
Design a class LibraryMember that manages basic information of a library user.
🛠 Requirements
🔹 Data Members
memberId → public
name → public
booksIssued → private
🔹 Member Functions
issueBook()
Increases booksIssued by 1
returnBook()
Decreases booksIssued by 1 (only if > 0)
getBooksIssued()
Returns number of books currently issued
🔹 In main()
Create 2 LibraryMember objects
Assign different IDs and names
Issue and return books
Display final status of each member
🧠 Rules
❌ Do NOT access booksIssued directly
✅ Use only class functions */

#include<iostream>
using namespace std;

class LibraryMember
{
private:
    int booksIssued=0;
public:
    int memberID;
    string name;
    void issueBook()
    {
        booksIssued=booksIssued+1;
    }
    void returnBook()
    {
        if(booksIssued>0){
            booksIssued=booksIssued-1;
        }
    }
    int getBooksIssued()
    {
        return booksIssued;
    }
};

int main()
{
    LibraryMember m1,m2;
    cin>>m1.memberID>>m1.name;
    cin>>m2.memberID>>m2.name;
    for(int i=0;i<=5;i++){
        m1.issueBook();
    }
    for(int i=0;i<=2;i++){
        m1.returnBook();
    }
    for(int i=0;i<=7;i++){
        m2.issueBook();
    }
    for(int i=0;i<=4;i++){
        m2.returnBook();
    }

    cout<<"Member 1: "<<endl;
    cout<<"ID: "<<m1.memberID<<endl;
    cout<<"Name: "<<m1.name<<endl;
    cout<<"Books Issued: "<<m1.getBooksIssued()<<endl;
    cout<<" "<<endl;
    cout<<"Member 2: "<<endl;
    cout<<"ID: "<<m2.memberID<<endl;
    cout<<"Name: "<<m2.name<<endl;
    cout<<"Books Issued: "<<m2.getBooksIssued()<<endl;


    return 0;
}
