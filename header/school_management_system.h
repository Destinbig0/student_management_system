#pragma once
#include <iostream>
#include "authenticate.h"
#include "design.h"

namespace Mine {

    class Manage : public Authenticate, public Design {

        public:
        void main_menu_ ();

    };
    
}