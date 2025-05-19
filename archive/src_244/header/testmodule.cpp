#include "testmodule.hpp"

#include "utillib.hpp"


/* definition */
namespace cpp {

    cylinder::cylinder(const double radius_param,
                       const double height_param) noexcept :
        base_radius_(radius_param), height_(height_param) {
        LF;
        out << "Hello I am cylinder. I initialized ..." << NL;
        LF;
    }

    cylinder::~cylinder() noexcept {
        /* code */
        LF;
        out << "Good Bay cylinder ..." << NL;
        LF;
    }

    void cylinder::set_base_radius(const double radius_param) noexcept {
        this->base_radius_ = radius_param;
    }

    void cylinder::set_height(const double height_param) noexcept {
        this->height_ = height_param;
    }

    double cylinder::get_base_radius() const noexcept {
        return this->base_radius_;
    }

    double cylinder::get_height() const noexcept {
        /* code */
        return this->height_;
    }

    double cylinder::volume() const noexcept {
        double br{this->base_radius_};
        double result{PI * br * br * this->height_};
        return result;
    }

} // namespace cpp
