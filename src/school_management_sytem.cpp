#include <iostream>
#include <vector>

#include "../header/school_management_system.h"
#include "../header/menus_functions.h"
#include "../header/tools.h"

namespace Mine {

    void Manage::main_menu_ () 
    {
        //  -------------------- Authenticate the user -------------------
        this->usr_authenticate ();

        /* SET THE DETAILS AND MENUS HERE */
        const std::string welcome_message = "WELCOME TO SCHOOL MANAGEMENT SYSTEM ";
        const int width = 120, height = 3;

        ManageMenus main_menu;
        main_menu.add_ ( "Logout", Menus::logout );

        //  ------------------ setting the welcome page ----------------------------
        welcome_page_( welcome_message, width, height);
        main_menu.draw_menus_();

    }

};