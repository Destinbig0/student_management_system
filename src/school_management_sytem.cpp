#include <iostream>
#include <vector>

#include "../header/school_management_system.h"
#include "../header/menus_functions.h"
#include "../header/tools.h"

namespace Mine {

    void Manage::main_menu_ () 
    {
        //  -------------------- Authenticate the user -------------------
        // this->usr_authenticate ();

        /* SET THE DETAILS AND MENUS HERE */
        const std::string welcome_message = "WELCOME TO SCHOOL MANAGEMENT SYSTEM ";
        const int width = 120, height = 3;

        ManageMenus main_menu;
        main_menu.add_ ( "Logout", Menus::logout );

        //  ------------------ setting the welcome page ----------------------------
        welcome_page_( welcome_message, width, height);
        main_menu.draw_menus_();

        //  ------------- Asking for user input for choosing on a menue -------------
        int menu_number;
        std::cout << "Input the number of the menu to continue: ";
        re_choose_menu:                      /* CHECKING INPUT VALUE TO SELECT THE SPECIFIC Option, IMPORTANT */
        std::cin >> menu_number;

        if( menu_number <= 0 || menu_number > main_menu.count_menus_() )
        {
            std::cout << "\x1B[031mPlease Re-inter the correct number:\033[0m";
            goto re_choose_menu;
            
        } else
        {
            main_menu.select_ (menu_number);
        }

    }

};