/* Subject: using constant object  */

#include "main.hpp"


int main() {


    const cpp::user hinata{1001, "hinata_chikao", "hc@123456"};
    hinata.print_info();

    /* below line not works and encounter with compile time error
       because hinata object is a const object */
    // cpp::user *hinata_one{&hinata};
    // hinata_one->print_info();

    /* below lines works properly  */
    const cpp::user *hinata_two{&hinata};
    hinata_two->print_info();

    /* below line not works and encounter with compile time error
       because hinata object is a const object */
    // cpp::user &hinata_three{hinata};

    /* below lines works properly  */
    const cpp::user &hinata_four{hinata};
    hinata_four.print_info();

    out << "\n #(22:24:32): The End ..." << eln;
    return EXIT_SUCCESS;
}
