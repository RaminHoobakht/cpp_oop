/* Subject:  */

#include "main.hpp"
#include "raphael.hpp"
#include "samuel.hpp"


/* ------------------------------ */

int main() {
    /* code */

    dennis_ritchie::raphael my_raphael{};
    dennis_ritchie::samuel my_samuel{};

    my_samuel.print_name();
    SEP;

    my_raphael.set_samuel(&my_samuel);
    my_raphael.print_name();
    SEP;

    pout << "\n #(18:48:30): The End ..." << eln;
    return EXIT_SUCCESS;
}
