/*

https://youtu.be/tdsYLOiJDo0?si=vIoFQ31p9XKGHOYW
Subject: using nested class

- When Inner is private, Its object can't be created from outside. Like in main.
- Outer doesn't have access to private section of Inner.
- Inner has access to private section of outer.
- Inner can directly access static member of outer, but can access member
variable without going through an object

*/

/*
Subject: I want to test the all up closes with below steps:

- I have a raphael class with an inner class named samuel.
- Inner class should be create in public section.
- The raphael has private and public section.
- The raphael has static member variable in private and public section
- The raphael has static function in private and public section.
- First time, raphael is out of namespace.
- In the next step a there will be a namespace as a wrapper of raphael.
- I add new staff to the samuel step by step. After every running.

PS: I write code in single file ".cpp" where there is main function. And in
the next step convert the code to the standard multiple files. ".hpp, .cpp".
*/

#include "main.hpp"

class raphael final {
private:
    std::string name_{"raphael"};
    int private_code_{1001};
    static inline int static_private_code_{1101};
    static void static_private_print_info() noexcept;

public:
    int public_code{2001};
    static inline int static_public_code{2201};
    static void static_public_print_info() noexcept;
    class samuel final {
    public:
        [[maybe_unused]] void print_samuel(const raphael &rhs) const noexcept;
    };
};

void raphael::static_private_print_info() noexcept {
    pout << "I am static private print info function ..." << NL;
}

void raphael::static_public_print_info() noexcept {
    pout << "I am static public print into function ..." << NL;
}


void raphael::samuel::print_samuel(const raphael &rhs) const noexcept {
    /* code */

    pout << "name is: " << rhs.name_ << NL;
    pout << "private code is: " << rhs.private_code_ << NL;
    pout << "static private code is: " << raphael::static_private_code_ << NL;
    pout << "public code is: " << rhs.public_code << NL;
    pout << "static private code is: " << raphael::static_private_code_ << NL;
}

/* ----------------------- */

int main() {
    /* code */

    raphael my_raphael{};

    raphael::samuel my_samuel{};
    my_samuel.print_samuel(my_raphael);


    pout << "\n #(19:23:53): The End ..." << eln;
    return EXIT_SUCCESS;
}
