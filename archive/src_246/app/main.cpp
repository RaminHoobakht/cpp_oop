/* Subject: operator overloading for << */

#include "main.hpp"
#include "src/header/utillib.hpp"

int main() {

    LF;

    cpp::samuel my_samuel{10, 20, 30};

    out << my_samuel << NL;

    out << "\n #(07:03:04): The End ..." << eln;
    return EXIT_SUCCESS;
}
