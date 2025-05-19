/* Subject:  */

#include "main.hpp"

using person = entity::person;

int main() {

    LF;
    person p1{"Raphael", "Green", 1001, 25};
    person p2{"Samuel", "Brown", 1002, 32};
    person p3{"Daniel", "Black", 1003, 41};

    [[maybe_unused]] person students_by_value[3]{p1, p2, p3};
    [[maybe_unused]] person *students_by_pointer[3]{&p1, &p2, &p3};

    LF;

    for (person &item: students_by_value) {
        out << item << NL;
    }
    SEP;


    for (person *item: students_by_pointer) {
        out << *item << NL;
    }
    SEP;

    out << "\n #(02:02:34): The End ..." << eln;
    return EXIT_SUCCESS;
}
