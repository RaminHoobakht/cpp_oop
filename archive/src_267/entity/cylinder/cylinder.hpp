#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#pragma once

#include "cylinder_headers.hpp"

namespace entity {

    class cylinder final {

    private:
        double base_radius_{1};
        double height_{2};

        /* static: Pi is belongs to the cylinder blueprint not every instance. 
         * inline: make a facilities to initial the Pi inline not out of the class.
         * const : Pi not changeable. its value is constant. 
         * long double: is floating point data-type */
        static inline const long double Pi{3.14159265358979323};

    public:
        cylinder() noexcept = default;
        explicit cylinder(double radius_param,
                          double height_param = 10) noexcept;

        ~cylinder() noexcept;

        [[maybe_unused]] void set_base_radius(double radius_param) noexcept;
        [[maybe_unused]] void set_height(double height_param) noexcept;

        [[maybe_unused]] [[nodiscard]] double get_base_radius() const noexcept;
        [[maybe_unused]] [[nodiscard]] double get_height() const noexcept;

        [[maybe_unused]] [[nodiscard]] double volume() const noexcept;

    public:
        static inline const std::string default_color{"Red"};
    };


} // namespace entity

#endif /* HEADER_TEST_MODULE_HPP */
