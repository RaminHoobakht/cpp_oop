/* Subject: constant object as a function argument  */

#include "main.hpp"


int main() {

    LF;

    const cpp::user hinata{1001LU, "hinata_chikao", "hc@321654"};

    /* even though hinata object is constant, when it passes
       by value as an argument to the below function, it is mutable
       and can modify.
       refer to the body of function. */
    cpp::display_user_info_by_val(hinata);
    SEP;

    hinata.print_info();

    out << "\n #(18:30:16): The End ..." << eln;
    return EXIT_SUCCESS;
}
