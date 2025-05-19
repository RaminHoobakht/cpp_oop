/* Subject: using mutable field  */

#include "main.hpp"


int main() {

    LF;

    cpp::raphael my_raphael{};

    for (size_t i{util::zero}; i < 10; ++i) {
        my_raphael.display_info();
    }

    out << "\n #(20:11:08): The End ..." << eln;
    return EXIT_SUCCESS;
}
