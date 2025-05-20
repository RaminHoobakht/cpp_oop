/* Subject:   */

#include "main.hpp"


int main() {

    cpp::student raphael{"Raphael", "Brown", 1001, 3};

    pout << "information from raphael:" << NL;
    raphael.print_info();
    SEP;

    raphael.set_my_student5(new cpp::student{"Daniel", "Green", 1002, 4});
    (raphael.get_my_student5())->print_info();
    SEP;

    pout << "\n #(00:00:00): The End ..." << eln;
    return EXIT_SUCCESS;
}
