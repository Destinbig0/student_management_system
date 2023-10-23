#pragma once
#include <iostream>
#include <vector>

namespace Mine {
    class ManageMenus {
        
        std::vector<std::string> queue_menus_;
        std::vector<void (*)()> queue_functions_;

        public:
        void add_ (std::string text, void (*function) ());
        int remove_( int position );
        inline int count_menus_ () { return queue_menus_.size(); }
        int select_ ( int menu_number );
        void draw_menus_ ( );
        friend class Design;
    
    };
}