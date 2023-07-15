#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <iostream>
#include "phoneNumber.h"
#include "Contact.h"

using namespace std;

class ContactBook
{
    public:
        ContactBook();
        ~ContactBook();
        void addUser();
        void deleteUser(int user_id);
        void editUser(int user_id);
        int countUsers();
        void SearchUser(int user_id);
        void showAll();

    private:
        int count;

        phoneNumber *phone_list;
        int p_count,p_size;

        Contact *contact_list;
        int C_count,C_size;
};

#endif
