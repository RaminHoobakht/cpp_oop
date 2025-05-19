#ifndef HEADER_POINT_2_HPP
#define HEADER_POINT_2_HPP

#pragma once


#include "point2_headers.hpp"

namespace entity {

    class point2 final {

    private:
        double x_{};
        double y_{};

    public:
        static std::size_t point2_count;

    public:
        point2() noexcept;
        point2(double x_param, double y_param) noexcept;
        explicit point2(double xy_coord) noexcept;
        point2(const point2 &rhs) noexcept;
        ~point2() noexcept;

        [[maybe_unused]] void set_x(double x_param) noexcept;
        [[maybe_unused]] void set_y(double y_param) noexcept;

        [[nodiscard]] double get_x() const noexcept;
        [[nodiscard]] double get_y() const noexcept;

        void print_info() const noexcept;

        [[nodiscard]] static size_t get_point_count() noexcept;
        [[nodiscard]] long double length() const noexcept;
    };


} // namespace entity


#endif /* HEADER_POINT_2_HPP */
