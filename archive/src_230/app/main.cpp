/* Subject: what side effect has a constant object  */

#include "main.hpp"


int main() {

    LF;
    const cpp::my_number the_number{120};

    /* it can not modify any constant object
       below line encounter with compile time error. */
    
    // the_number.set_number(1001);

    out << "value of the number is: " << the_number.get_number() << NL;

    out << "\n #(13:29:04): The End ..." << eln;
    return EXIT_SUCCESS;
}
