#include "ContactBook.h"
#include "Contact.h"
#include "phoneNumber.h"
#include <iostream>
using namespace std;

ContactBook::ContactBook()
{
    count = 0;

    p_count=0;
    p_size=5;
    C_count=0;
    C_size=5;
    phone_list = new phoneNumber[p_size];
    contact_list = new Contact[C_size];
}

ContactBook::~ContactBook()
{
    delete []phone_list;
    delete []contact_list;
}
void ContactBook::addUser()
{
    Contact * new_user = new Contact();
    new_user->userData();
    contact_list[C_count++] = *new_user;
    count++;
}
void ContactBook::deleteUser(int user_id)
{
    if(C_count==0){
        cout<<"NO User Exist~!\n";
        return ;
    }
    bool deleted=false;
    for(int i=0;i<C_count;++i){
        if(contact_list[i].getId()==user_id){
            if(i==C_count-1){
                C_count--;
            }else{
                contact_list[i]= contact_list[C_count-1];
                C_count--;
            }
            deleted = true;
            count--;
            break;
        }
    }
    if(deleted){
        cout<<"User Deleted Successfully!\n";
    }else{
        cout<<"NO User Exist\n";
    }
}
void ContactBook::showAll()
{
    if(C_count==0){
        cout<< "NO User Found!\n";
        return;
    }
    for(int i=0;i<C_count;++i){
        contact_list[i].show();
    }
}
void ContactBook::editUser(int user_id)
{
    if(C_count==0)
    {
        cout<<"No User Found"<<endl;
        return;
    }
    bool edited=false;
    for(int i=0;i<C_count;i++)
    {
        if(contact_list[i].getId()==user_id)
        {
            contact_list[i].userData();
            edited=true;
        }
    }
    if(edited)
    {
        cout<<"User Edited Successfully"<<endl;
    }
    else
    {
        cout<<"No User Found"<<endl;
    }
}
void ContactBook::SearchUser(int user_id)
{
    if(C_count==0)
    {
        cout<<"No User Found"<<endl;
        return;
    }
    bool found=false;
    for(int i=0;i<C_count;i++)
    {
        if(contact_list[i].getId()==user_id)
        {
            contact_list[i].show();
            found=true;
        }
    }
    if(found)
        cout<<"User Found Successfully"<<endl;
    else
        cout<<"No User Found"<<endl;
}
int ContactBook::countUsers()
{
    return count;
}
