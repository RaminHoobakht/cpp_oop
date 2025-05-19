#include "point.hpp"

namespace entity {

    point::point() noexcept {
        /* code */
        out << "I am point class ..." << NL;
    }

    point::point(double *x, double *y) noexcept : x_(x), y_(y) {
        /* code */
        out << "I am point class (2) ..." << NL;
    }

    point::point(const point &rhs) noexcept :
        x_(new double{*(rhs.x_)}), y_(new double{*(rhs.y_)}) {
        /* code */
        out << "I am copy constructor ..." << NL;
    }

    // point::point(point &&rhs) noexcept :
    //     x_(std::exchange(rhs.x_, new double{0.0})),
    //     y_(std::exchange(rhs.y_, new double{0.0})) {
    //     /* code */
    //     out << "I am move constructor ..." << NL;
    // }

    point::point(point &&rhs) noexcept :
        x_(std::exchange(rhs.x_, nullptr)), y_(std::exchange(rhs.y_, nullptr)) {
        /* code */
        out << "I am move constructor ..." << NL;
    }


    point::~point() noexcept {
        /* code */
        delete x_;
        delete y_;
        out << "Goodbye point ..." << NL;
    }

    [[maybe_unused]] void point::set_x(double *x) noexcept {
        /* code */
        x_ = x;
    }

    [[maybe_unused]] void point::set_y(double *y) noexcept {
        /* code */
        y_ = y;
    }

    double *point::get_x() const noexcept {
        /* code */
        return x_;
    }

    double *point::get_y() const noexcept {
        /* code */
        return y_;
    }

    point &point::operator=(const point &rhs) noexcept {
        if (this != &rhs) {
            x_ = rhs.x_;
            y_ = rhs.y_;
        }
        return *this;
    }

    point &point::operator=(point &&rhs) noexcept {
        if (this != &rhs) {
            x_ = std::exchange(rhs.x_, new double{0.0});
            y_ = std::exchange(rhs.y_, new double{0.0});
        }
        return *this;
    }


    std::ostream &operator<<(std::ostream &os, const point &rhs) noexcept {
        auto rhs_x{rhs.get_x() == nullptr ? "null"
                                          : std::to_string(*(rhs.get_x()))};
        auto rhs_y{rhs.get_y() == nullptr ? "null"
                                          : std::to_string(*(rhs.get_y()))};
        os << std::format(R"({}"x":{}, "y":{}{})", "{", rhs_x, rhs_y, "}");
        return os;
    }

} // namespace entity
