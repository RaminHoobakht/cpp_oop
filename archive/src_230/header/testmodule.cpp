#include "testmodule.hpp"
#include <cmath>

#include "utillib.hpp"

/* definition */
namespace cpp {

    my_number::my_number() noexcept {
        out << "Hello, I am my_number class ..." << NL;
    }

    my_number::my_number(const int number) noexcept {
        this->number_ = number;
        out << "Hello, I am my_number class and by the way I was initialized "
               "..."
            << NL;
    }

    my_number::~my_number() noexcept {
        out << "Good Bay see you later ..." << NL;
    }

    void my_number::set_number(const int number) noexcept {
        /* code */
        this->number_ = number;
    }

    int my_number::get_number() const noexcept {
        /* code */
        return this->number_;
    }


} // namespace cpp
