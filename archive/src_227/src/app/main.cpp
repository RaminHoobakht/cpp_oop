/* Subject:   */

#include "main.hpp"


int main() {

    cpp::person hinata{"hinata", "chikao", 54};

    int num{520};
    int *number{&num};
    out << "value of number is: " << *number << NL;

    /* encounter with compile time error. because
       number is a not heap pointer. it is stack pointer. */
    delete number;

    out << "\n #(02:24:45): The End ..." << eln;
    return EXIT_SUCCESS;
}
