#include "user_data.h"
using namespace Wt;


User_data::User_data()
{
    /*this->set_username(user_entered);
    this->set_password(pass_entered);*/
    return;

}

void User_data :: set_username(const WString & user_entered){
    this->username = user_entered;
    return;
}

void User_data :: set_password(const WString & pass_entered){
    this->password = pass_entered;
    return;
}

WString User_data :: show_username(){
    return this->username;
}
WString User_data :: show_pass(){
    return this->password;
}
