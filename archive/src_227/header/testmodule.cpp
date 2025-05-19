#include "testmodule.hpp"
#include "utillib.hpp"


/* definition */
namespace cpp {


    cylinder::cylinder() noexcept { out << "Hello Cylinder ..." << NL; }

    cylinder::cylinder(long double radius, long double height) noexcept :
        base_radius_(radius), base_height_(height) {
        out << "Hello Cylinder. you was initialized ..." << NL;
    }

    cylinder::~cylinder() noexcept {
        /* good bye message */
        out << "Good Bye Cylinder ..." << NL;
    }

    void cylinder::set_radius(const long double radius) noexcept {
        this->base_radius_ = radius;
    }

    void cylinder::set_height(const long double height) noexcept {
        this->base_height_ = height;
    }

    long double cylinder::get_radius() const noexcept {
        /* return radius */
        return this->base_radius_;
    }

    long double cylinder::get_height() const noexcept {
        /* return height */
        return this->base_height_;
    }

    long double cylinder::volume() const noexcept {
        /* return volume */
        return PI * this->base_radius_ * this->base_radius_ *
               this->base_height_;
    }

    cylinder &cylinder::operator=(const cylinder &rhs) noexcept = default;

} // namespace cpp
