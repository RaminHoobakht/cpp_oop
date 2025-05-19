/* Subject: using move constructor */

#include "main.hpp"

using person = entity::person;

int main() {

    person *person_one{new person{"Hinata", "Chikao", 1001, 54}};
    person_one->display_person();
    SEP;

    person *person_two{new person{std::move(*person_one)}};
    SEP;

    person_two->display_person();
    SEP;

    person_one->display_person();
    SEP;

    delete person_one;
    delete person_two;

    out << "\n #(02:25:13): The End ..." << eln;
    return EXIT_SUCCESS;
}
