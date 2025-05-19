/* Subject:  */

#include "main.hpp"

struct raphael {

private:
    int x{50};
    int y{60};
    int z{70};

    friend void display_raphael() noexcept;
};

void display_raphael() noexcept {
    raphael my_raphael{};
    out << my_raphael.x << NL;
    out << my_raphael.y << NL;
    out << my_raphael.z << NL;
}


using namespace entity;

int main() {

    LF;

    dog my_dog{"jes", "Golden", 7};
    display_dog_info(my_dog);
    SEP;

    /* when friend function has no argument it is
       important that where to define. */

    // display_dog_info_();


    display_raphael();

    out << "\n #(21:12:35): The End ..." << eln;
    return EXIT_SUCCESS;
}

/* Error: compile time error
   it should be upper of the main method. */

// void display_raphael() noexcept {
//     raphael my_raphael{};
//     out << my_raphael.x << NL;
//     out << my_raphael.y << NL;
//     out << my_raphael.z << NL;
// }
