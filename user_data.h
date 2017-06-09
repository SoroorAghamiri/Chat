#ifndef USER_DATA_H
#define USER_DATA_H

#include <iostream>
#include <Wt/WText>
using namespace std;
using namespace Wt;

class User_data
{
public:
    User_data();
    void set_username(const WString & user_entered);
    void set_password(const WString & pass_entered);
    WString show_username();
    WString show_pass();
private:
    WString username;
    WString password;
};

#endif // USER_DATA_H
