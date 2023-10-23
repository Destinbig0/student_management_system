#include <iostream>

#include "../header/design.h"

namespace Mine
{
    void Design::welcome_page_ ( std::string welcome_message, int width, int height )
    {

        //  set the borders and message between
        for ( int h = 0; h < height; h++ ) {
            
            //  height
            std::cout << "|";
            for ( int w = 0; w < width; w++ ) {
                //  width
                if ( h != height/2 && (h == 0 || h == height - 1))
                    //  outputing - on the borders
                    std::cout << "-";
                    
                else if ( h == height/2 ) {

                    //  output message if height is in the middle and adding space at sides
                    int space = (width - welcome_message.length()) / 2;
                        if ( w == space ) {
                            std::cout << welcome_message;
                            w = welcome_message.length() + space;
                        }
                        std::cout << " ";


                } else 
                    //  outputting space inside
                    std::cout << " ";
            }
            std::cout << "|\n";

        }
        
    }
}