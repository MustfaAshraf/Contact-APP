#ifndef CONTACT_H
#define CONTACT_H
#include "phoneNumber.h"
#include <string>

using namespace std;

class Contact
{
    public:
        Contact();
        ~Contact();
        void userData();
        void addPhone();
        void deletePhone(int id);
        void searchUser(int user_id);
        void show();
        int getId();




    private:
        string f_name,l_name,email;
        int id;
        int gender;
        string city;
        string note;

        phoneNumber *phone;
        int phone_size;
        int counter;


};

#endif // CONTACT_H
