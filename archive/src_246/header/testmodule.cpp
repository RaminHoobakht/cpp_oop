#include "testmodule.hpp"

/* definition */
namespace cpp {

    samuel::samuel(int x) noexcept : samuel(x, 1, 1) {}

    samuel::samuel(int x, int y) noexcept : samuel(x, y, 1) {}

    samuel::samuel(int x, int y, int z) noexcept : x_(x), y_(y), z_(z) {
        out << "Hello I am Samuel ..." << NL;
    }

    samuel::~samuel() noexcept {
        /* code */
        out << "Goodbye Samuel ..." << NL;
    }

    int samuel::volume() const noexcept {
        /* code */
        return x_ * y_ * z_;
    }

    std::ostream &operator<<(std::ostream &os, const samuel &rhs) noexcept {
        std::string result = std::format(R"({}"x_": {}, "y_": {}, "z"_: {}{})",
                                         "{", rhs.x_, rhs.y_, rhs.z_, "}");
        os << result;
        return os;
    }

}; // namespace cpp
