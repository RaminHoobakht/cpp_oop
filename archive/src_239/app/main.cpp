/* Subject:   */

#include "main.hpp"


int main() {

    LF;

    cpp::person hinata{};

    hinata.print_information();
    SEP;

    hinata.get_person_id() = 1002LLU;
    hinata.get_fist_name() = "Hinata";
    hinata.get_last_name() = "Chikao";
    hinata.get_age() = 54;

    hinata.print_information();
    SEP;


    out << "\n #(05:45:01): The End ..." << eln;
    return EXIT_SUCCESS;
}
