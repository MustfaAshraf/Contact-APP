#include "Contact.h"
#include "phoneNumber.h"
#include <iostream>

using namespace std;

Contact::Contact()
{
    f_name = "NULL";
    l_name = "NULL";
    email = "NULL";
    city = "NULL";
    note = "NULL";
    id =0;
    gender = 1;
    phone_size = 5;
    counter =0;
    phone = new phoneNumber[phone_size];

}

Contact::~Contact()
{
    delete []phone;
}
void Contact::userData()
{
    cout<<"Enter Your First Name : ";
    cin>>f_name;
    cout<<endl;
    cout<<"Enter Your Last Name : ";
    cin>>l_name;
    cout<<endl;
    cout<<"Enter Your ID : ";
    cin>>id;
    cout<<endl;
    cout<<"Enter Your Email : ";
    cin>>email;
    cout<<endl;
    cout<<"Enter Your Gender(0-Female , 1-Male) : ";
    cin>>gender;
    cout<<endl;
    cout<<"Enter Your City : ";
    cin>>city;
    cout<<endl;
    cout<<"Enter Your Note : ";
    cin>>note;
    cout<<endl;
    int n=0;
    cout<< "How many phones (0-"<<phone_size<<")?";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        phoneNumber * new_phone = new phoneNumber();
        new_phone->getData();
        phone[counter++]= *new_phone;
    }
}

void Contact::addPhone()
{
        phoneNumber * new_phone = new phoneNumber();
        new_phone->getData();
        phone[counter++]= *new_phone;
}
void Contact::deletePhone(int id)
{
    if(counter==0){
        cout<<"NO Phone Exist~!\n";
        return ;
    }
    bool deleted=false;
    for(int i=0;i<counter;++i){
        if(phone[i].getPhoneId()==id){
            if(i==counter-1){
                counter--;
            }else{
                phone[i]= phone[counter-1];
                counter--;
            }
            deleted = true;
            break;
        }
    }
    if(deleted){
        cout<<"Phone Deleted Successfully!\n";
    }else{
        cout<<"NO Phone Exist\n";
    }
}
int Contact::getId()
{
    return id;
}
void Contact::show()
{
    cout<<"Contact ID : "<<id<<endl;
    cout<<"First Name : "<<f_name<<endl;
    cout<<"Last Name : "<<l_name<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Gender : ";
    if(gender==0)
        cout<<"Female"<<endl;
    else
        cout<<"Male"<<endl;
    cout<<"City : "<<city<<endl;
    cout<<"Note : "<<note<<endl;
    if(counter==0)
        cout<<"No Phone Found"<<endl;
    else
        for(int i=0;i<counter;i++)
        {
            phone[i].showData();
        }
}
void Contact::searchUser(int user_id)
{
    if(Contact::getId()==0)
        cout<<"No User Found"<<endl;
    else if(Contact::getId()==user_id)
    {
        Contact::show();
    }
}

