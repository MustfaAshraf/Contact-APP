#include <iostream>
#include "phoneNumber.h"
#include "Contact.h"
#include "ContactBook.h"

using namespace std;

int main()
{
    int choice=-1;
    while(choice!=0)
    {
        cout<<"1. Add a New Contact."<<endl
            <<"2. Delete a Contact."<<endl
            <<"3. Search for a contact."<<endl
            <<"4. Edit an Existing User."<<endl
            <<"5. Display All Contacts."<<endl
            <<"0. Exit the program."<<endl;
        cin>>choice;
        ContactBook c1;
        switch(choice)
        {
            case 1:
            {
                c1.addUser();
                break;
            }
            case 2:
            {
                int user_id;
                cout<<"Enter User id To delete : ";
                cin>>user_id;
                c1.deleteUser(user_id);
                break;
            }
            case 3:
            {
                int user_id;
                cout<<"Enter User Id To Search : ";
                cin>>user_id;
                c1.SearchUser(user_id);
                break;
            }
            case 4:
            {
                int user_id;
                cout<<"Enter User Id To Edit : ";
                cin>>user_id;
                c1.editUser(user_id);
                break;
            }
            case 5:
            {
                c1.showAll();
                break;
            }
        }
    }
    return 0;
}
