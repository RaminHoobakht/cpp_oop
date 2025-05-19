/* Subject: copy constructor really create a copy (clone) from array  */

#include "main.hpp"
#include "src/header/utillib.hpp"

struct robert {


    int numbers[9]{};

    robert() {
        /* code */
        out << "Hello, I am Robert ..." << NL;
    }

    void display_robert() {
        /* code */
        for (size_t i{util::zero}; i < 9; ++i) {
            out << numbers[i] << SP;
        }
        LF;
    }
};


int main() {

    LF;

    robert robert_one{};

    robert_one.display_robert();

    for (int i{util::zero}; i < 9; ++i) {
        robert_one.numbers[i] = i + 1;
    }

    robert_one.display_robert();
    SEP;

    robert robert_two = robert_one;

    robert_two.display_robert();
    SEP;

    robert_one.numbers[0] = 110;

    robert_one.display_robert();
    SEP;

    robert_two.display_robert();
    SEP;

    out << "\n #(01:42:44): The End ..." << eln;
    return EXIT_SUCCESS;
}
