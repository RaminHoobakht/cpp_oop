#include "testmodule.hpp"
#include <cmath>

#include "utillib.hpp"


/* definition */
namespace cpp {

    raphael::raphael() noexcept {
        /* code */
        out << "Hello, I am raphael ..." << NL;
    }

    raphael::~raphael() noexcept {
        /* code */
        out << "Good Bay raphael ..." << NL;
    }

    raphael::raphael(const int number) noexcept {
        this->number_ = number;
        out << "Hello, I am raphael with initialization ..." << NL;
    }

    void raphael::set_number(const int number) noexcept {
        /* code */
        this->number_ = number;
    }

    int raphael::get_number() noexcept {
        /* code */
        return this->number_;
    }


} // namespace cpp
