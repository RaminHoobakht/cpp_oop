/*
 * Subject: using nested class
 *
 * */

#include "main.hpp"

namespace albert {

    int add(int a, int b) noexcept;
    int subtract(int a, int b) noexcept;

} // namespace albert

/* ----------------------------------- */
/* ----------------------------------- */

int main() {
    /* code */

    int result_add{albert::add(121, 122)};
    int result_subtract{albert::subtract(321, 960)};

    pout << "value of result add: " << result_add << NL;
    pout << "value of result subtract: " << result_subtract << NL;

    pout << "\n #(01:34:52): The End ..." << eln;
    return EXIT_SUCCESS;
}

/* ----------------------------------- */
/* ----------------------------------- */

namespace albert {

    int add(int a, int b) noexcept {
        /* code */
        return a + b;
    }

    int subtract(int a, int b) noexcept {
        /* code */
        return a - b;
    }
} // namespace albert
