/* Subject:   */

#include "main.hpp"


int main() {

    LF;

    const cpp::user hinata{1001LU, "hinata_chikao", "hc@123456"};

    /* it is not difference to be hinata const or not
     * because argument definition, refer to const.
     * refer to the function signature */
    cpp::display_user_info_const_by_val(hinata);
    SEP;

    hinata.print_info();

    out << "\n #(17:09:36): The End ..." << eln;
    return EXIT_SUCCESS;
}
