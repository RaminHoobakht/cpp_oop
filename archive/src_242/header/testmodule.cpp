#include "testmodule.hpp"
#include <string>

#include "utillib.hpp"

/* definition */
namespace cpp {

    raphael::raphael() noexcept {
        this->x = 120;
        this->y = 130;
        this->z = 140;
        out << "Hello, I am raphael ..." << NL;
    }

    raphael::~raphael() noexcept {
        /* code */
        out << "Good Bay raphael ..." << NL;
    }

    void raphael::display_info() const noexcept {
        ++(this->counter);
        std::string info{"x: " + std::to_string(this->x) +
                         " y: " + std::to_string(this->y) +
                         " z: " + std::to_string(this->z) +
                         " counter: " + std::to_string(this->counter)};
        out << "raphael information: " << info << NL;
    }


} // namespace cpp
