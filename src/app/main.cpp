/*
 * Subject: using nested class
 *
 *  - When the inner class is private, its object cann't be created
 *    from the outside. like in main function.
 *  - Outer doesn't have access to private section of inner.
 *  - Inner have access to private section of outer.
 *  - Inner can directly accecc static member of outers, but cann't
 *    access member variable, without gooing through an object.
 *
 *
 * */

#include "main.hpp"

int main() {
    /* code */


    // outer my_outer{120, 32.56};
    outer::inner inner_one{10.23};

    auto result{inner_one.get_double()};
    pout << "value of result is: " << result << NL;

    pout << "\n #(07:08:17): The End ..." << eln;
    return EXIT_SUCCESS;
}
