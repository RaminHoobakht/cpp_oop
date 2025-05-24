/* Subject:  */

#include "main.hpp"
#include "constant.hpp"


/* ------------------------------ */

int main() {
    /* code */

    extern int global_x;


    pout << "value of global_x variable is: " << global_x << NL;

    pout << "\n #(22:08:30): The End ..." << eln;
    return EXIT_SUCCESS;
}
