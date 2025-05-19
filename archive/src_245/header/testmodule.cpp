#include "testmodule.hpp"

#include "utillib.hpp"


/* definition */
namespace cpp {

    square::square() noexcept {
        /* code */
        out << "Hello, I am square class ..." << NL;
    }

    square::square(const double side_param) noexcept : m_side_{side_param} {
        out << "Hello, I am initialized square class ..." << NL;
    }

    square::~square() noexcept {
        /* code */
        out << "Good Bay square ..." << NL;
    }

    double square::surface() const noexcept {
        /* code */
        return this->m_side_ * this->m_side_;
    }

} // namespace cpp
