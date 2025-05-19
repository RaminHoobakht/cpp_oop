/* Subject: friend function */

/*
 *  - the friend function is first declaring and alive somewhere.
 *  - the implementation and live in any translation unit. just be
 *    sure that it will be found at link stage.
 *  - the declaration has to show up before you call the function.
 *  - the class determines who is its friend (through friend declaration).
 *  - the friend declaration can appear in the public or private section of the class.
 *    either works the same.
 *  - we can have multiple friend functions in the same class.
 *  - friend functions can be overloaded.
 *  - we have to use the object_name.member_var_name syntax in friend functions.
 *  - friend functions are not member functions.
 *  - friend functions don't have access to 'this' pointer.
 */


#include "main.hpp"

namespace entity {
    void display_dog_info() noexcept {
        const entity::dog my_dog{"joe", "shepherd", 5};
        out << std::format(R"({}"dog_name_":"{}",
             "dog_breed_":"{}", "dog_age_":{}{})",
                           "{", my_dog.dog_name_, my_dog.dog_breed_,
                           my_dog.dog_age_, "}")
            << NL;
    }

}

int main() {

    LF;

    const entity::dog dog_one{"joe", "shepherd", 5 };

    display_dog_info(dog_one);
    SEP;

    entity::display_dog_info();
    SEP;

    out << "\n #(12:02:02): The End ..." << eln;
    return EXIT_SUCCESS;
}
