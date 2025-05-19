/* Subject:   */

#include "main.hpp"
#include <string_view>
#include "src/header/testmodule.hpp"


int main() {

    LF;

    std::string_view un{"hinata_chikao"};
    std::string_view pw{"hc@123456"};
    cpp::user hinata_one{1001LU, un, pw};
    // cpp::user &hinata_two{hinata_one};
    cpp::user *hinata_three{&hinata_one};

    /* -------- */

    /* display user information and redefine all fields
       also, hinata_one must have changed */

    // cpp::display_user_info_const_by_ref(hinata_two);


    // cpp::display_user_info_const_by_ref(hinata_two);

    // cpp::display_user_info_by_pointer(hinata_three);

    cpp::display_user_info_by_const_pointer(hinata_three);

    /* -------- */

    hinata_one.print_info();

    out << "\n #(01:35:57): The End ..." << eln;
    return EXIT_SUCCESS;
}
