/* Subject: dangling pointers and references */

#include "main.hpp"
#include "src/header/testmodule.hpp"


int main() {

    LF;

    const cpp::raphael my_raphael{120};

    /* getter is not const, so when the object define const,
       not only setters function cannot modify the class fields
       but also getters cannot read current fields.
       below line encounter with compile time error  */
    int result{my_raphael.get_number()};
    out << "value of result is: " << result << NL;

    out << "\n #(18:04:58): The End ..." << eln;
    return EXIT_SUCCESS;
}
