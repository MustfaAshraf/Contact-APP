#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
#include <string>

using namespace std;

class phoneNumber
{
    public:
        phoneNumber();
        ~phoneNumber();
        void getData();
        void setPhone(string ph);
        void setType(string ty);
        int getPhoneId();
        string getPhone();
        string getType();
        void showData();


    private:
        int phone_id;
        string phone;
        string type;
};

#endif // PHONENUMBER_H
