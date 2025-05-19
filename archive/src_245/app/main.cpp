/* Subject: using explicit constructor  */

#include "main.hpp"


int main() {

    LF;

    cpp::square my_square{120};

    double result{my_square.surface()};
    out << "value of result is: " << result << NL;

    out << "\n #(18:00:40): The End ..." << eln;
    return EXIT_SUCCESS;
}
