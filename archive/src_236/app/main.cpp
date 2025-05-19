/* Subject:   */

#include "main.hpp"


int main() {

    LF;

    out << "create user object: " << NL;
    cpp::user hinata{1001LU, "hinata_chikao", "hc@123456"};

    out << "Main Function First: " << NL;
    hinata.print_info();


    out << "Display Function (ByVal): " << NL;
    cpp::display_user_info_by_val(hinata);

    out << "Main Function Second: " << NL;
    hinata.print_info();

    out << "\n #(00:55:17): The End ..." << eln;
    return EXIT_SUCCESS;
}
