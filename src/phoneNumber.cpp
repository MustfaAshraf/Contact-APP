#include "phoneNumber.h"
#include <iostream>
#include <string>
using namespace std;
phoneNumber::phoneNumber()
{
    phone = "NULL";
    type = "NULL";
    phone_id = 0;
}

phoneNumber::~phoneNumber()
{
    //dtor
}
void phoneNumber::getData()
{
    cout<<"Enter Phone ID : ";
    cin>>phone_id;
    cout<<endl;
    cout<<"Enter Your Phone : ";
    cin>>phone;
    cout<<endl;
    cout<<"Enter Your Phone Type : ";
    cin>>type;
    cout<<endl;
}
void phoneNumber::setPhone(string ph)
{
    phone = ph;
}

string phoneNumber::getPhone()
{
    return phone;
}

void phoneNumber::setType(string ty)
{
    type = ty;
}

string phoneNumber::getType()
{
    return type;
}

int phoneNumber::getPhoneId()
{
    return phone_id;
}

void phoneNumber::showData()
{
    cout<<"Phone ID : "<<phone_id<<endl;
    cout<<"Phone Number : "<<phone<<endl;
    cout<<"Phone Type : "<<type<<endl;
}
