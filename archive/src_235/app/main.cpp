/* Subject:   */

#include "main.hpp"


int main() {

    LF;
    cpp::user hc{1001LU, "hinata_chikao", "hc@123456"};
    cpp::user &hinata{hc};
    SEP;

    out << "by reference: " << NL;
    cpp::display_user_info_by_ref(hinata);
    SEP;

    out << "by constant reference: " << NL;
    cpp::display_user_info_by_const_ref(hinata);
    SEP;

    hinata.print_info();

    out << "\n #(17:18:55): The End ..." << eln;
    return EXIT_SUCCESS;
}
