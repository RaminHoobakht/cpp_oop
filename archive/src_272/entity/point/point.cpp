#include "point.hpp"

namespace entity {
    point::point() noexcept {
        /* code */
        point_count_++;
        pout << "I am point class ..." << NL;
    }

    point::point(double *x, double *y) noexcept : x_(x), y_(y) {
        /* code */
        point_count_++;
        pout << "I am point class (2) ..." << NL;
    }

    point::point(std::initializer_list<double> list) noexcept {
        x_ = new double{*(list.begin())};
        y_ = new double{*(list.begin() + 1)};
        point_count_++;
        pout << "I am initializer list of point class ..." << NL;
    }


    point::point(const point &rhs) noexcept :
        x_(new double{*(rhs.x_)}), y_(new double{*(rhs.y_)}) {
        /* code */
        point_count_++;
        pout << "I am copy constructor ..." << NL;
    }

    point::point(point &&rhs) noexcept :
        x_(std::exchange(rhs.x_, nullptr)), y_(std::exchange(rhs.y_, nullptr)) {
        /* code */
        pout << "I am move constructor ..." << NL;
    }

    point::~point() noexcept {
        /* code */
        delete x_;
        delete y_;
        point_count_--;
        pout << "Goodbye point ..." << NL;
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

    std::float128_t point::distance() const noexcept {
        /* code */
        std::float128_t result =
                powf128((*x_ - 0.0), 2) + powf128((*y_ - 0.0), 2);
        return sqrtf128(result);
    }

    // uint point::point_cpout() noexcept {
    //     /* code */
    //     return point_count_;
    // }

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

    uint point::point_count_{0U};
} // namespace entity
