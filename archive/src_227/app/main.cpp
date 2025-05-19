/* Subject: using classes  */

#include "main.hpp"
#include "src/header/testmodule.hpp"
#include "src/header/utillib.hpp"


int main() {

    LF;

    cpp::cylinder my_cyliner{122.36, 41};

    const auto result{my_cyliner.volume()};
    out << "value of result is: " << result << NL;


    out << "\n #(20:18:03): The End ..." << eln;
    return EXIT_SUCCESS;
}
