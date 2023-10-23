#pragma once
#include <iostream>

namespace Mine {
    class Authenticate {
    
        std::string usr_password_;
        void verify_usr();

        protected:
        std::string usr_name_;
        bool login_verified = false;
        int usr_logout_();
        
        public:
        void usr_authenticate ();
    };
}