#include <iostream>
#include "../header/tools.h"

namespace Mine {
    /*
    
    CLASS: Manage menus here!
    
    */
    void ManageMenus::add_ (std::string text, void (*function) ())
    {
        this->queue_menus_.push_back (text);
        this->queue_functions_.push_back (function);
    }

    int ManageMenus::remove_ ( int main_position )
    {
        // changing menu's position to index position
        int position = main_position - 1;

        // checking whether the size changed to decide whether removed or not
        int menus_size_before = queue_menus_.size();
        int functions_size_before = queue_functions_.size();

        //  erasing from the queue
        this->queue_menus_.erase ( queue_menus_.begin() + position );
        this->queue_functions_.erase ( queue_functions_.begin() + position );
        
        //  ----------------- Freeing memory ----------------
        this->queue_menus_.shrink_to_fit();
        this->queue_functions_.shrink_to_fit();
        
        //  returning true if it is successfully removed otherwise false
        if ( menus_size_before != queue_menus_.size() && functions_size_before != queue_functions_.size() )
            return true;
        else
            return false;

    }

    int ManageMenus::select_ ( int menu_number )
    {
        if ( menu_number >= count_menus_() && menu_number <= 0 )
            return false;
        else
        {
            this->queue_functions_.at ( menu_number - 1 )();
            return 1;
        }
    }

    
    void ManageMenus::draw_menus_( )
    {
        for (int n = 1; n <= this->count_menus_ (); n++)
        {
            std::cout.width(20);
            std::cout << n << ". " << this->queue_menus_.at ( n-1 ) << std::endl;
        }
    }
    
}