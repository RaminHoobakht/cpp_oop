/* Subject:  */

#include "main.hpp"

using person = entity::person;

int main() {

    LF;
    person p1{"Raphael", "Green", 1001, 25};
    SEP;

    person p2{"Samuel", "Brown", 1002, 32};
    SEP;

    person p3{"Daniel", "Black", 1003, 41};
    SEP;

    person students[3]{p1, p2, p3};
    SEP;

    p1.set_age(120);
    p1.display_person();
    students[0].display_person();


    out << "\n #(22:31:16): The End ..." << eln;
    return EXIT_SUCCESS;
}
