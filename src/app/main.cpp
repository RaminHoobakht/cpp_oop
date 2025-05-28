/*
 * Subject: using namespace
 *
 * */

#include "main.hpp"

int add(int a, int b) noexcept;

namespace dennis_ritchie {
    int add(int a, int b) noexcept;
    int calc_one(int a, int b) noexcept;
    int calc_two(int a, int b) noexcept;

} // namespace dennis_ritchie


int main() {
    /* code */

    int result_one{dennis_ritchie::calc_one(35, 63)};
    int result_two{dennis_ritchie::calc_two(35, 63)};

    pout << "result one is: " << result_one << NL;
    pout << "result two is: " << result_two << NL;

    pout << "\n #(05:22:18): The End ..." << eln;
    return EXIT_SUCCESS;
}

int add(int a, int b) noexcept {
    /* code */
    pout << "Ken Thompson ..." << NL;
    return (a + b) * 10;
}


namespace dennis_ritchie {

    int add(int a, int b) noexcept {
        /* code */
        pout << "Dennis Ritchie ..." << NL;
        return a + b;
    }

    int calc_one(int a, int b) noexcept {
        int result{add(a, b)};
        return result * 5;
    }

    int calc_two(int a, int b) noexcept {
        int result{::add(a, b)};
        return result;
    }
} // namespace dennis_ritchie
