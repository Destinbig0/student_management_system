#include <iostream>

#include "../header/authenticate.h"

namespace Mine 
{
    void Authenticate::usr_authenticate () 
    {
        verifying_a_usr: 
        {
            if( !login_verified ) 
            {

                std::cout << "\x1B[035m----------- Enter the login credintals ----------\033[0m" << std::endl;
                std::cout << "USERNAME: ";
                std::cin >> this->usr_name_;
                std::cout << "PASSWORD: ";
                std::cin >> this->usr_password_;
            }

            verify_usr();
            
            if ( !login_verified ) 
            {
                std::cout << "\x1B[31mUser not found! TRY AGAIN\033[0m" << std::endl;
                goto verifying_a_usr;
            }
            else
            {
                std::cout << "\n\t\t\t\t\t \x1B[32mCongratulations! You're most welcome! " << usr_name_ << "\033[0m" << std::endl;
            }

        }
    }

    void Authenticate::verify_usr () 
    {
        // required
        std::string username = "destinbig0";
        std::string password = "12345t";

        // checking user input
        if ( usr_name_ == username && usr_password_ == password )
            login_verified = true;
        else 
            login_verified = false;

    }

    int Authenticate::usr_logout_ ()
    {
        login_verified = false;
        return !login_verified;
    }
    
}