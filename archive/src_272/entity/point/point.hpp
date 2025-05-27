#ifndef HEADER_POINT_HPP
#define HEADER_POINT_HPP

#pragma once

#include "point_headers.hpp"

namespace entity {

    class point final {

    private:
        double *x_{};
        double *y_{};
        static uint point_count_;
        [[maybe_unused]] uint padding1{};
        [[maybe_unused]] uint padding2{};

    public:
        point() noexcept;
        point(double *x, double *y) noexcept;
        point(std::initializer_list<double> list) noexcept;
        point(const point &rhs) noexcept;
        point(point &&rhs) noexcept;
        ~point() noexcept;

        [[maybe_unused]] void set_x(double *x) noexcept;
        [[maybe_unused]] void set_y(double *y) noexcept;

        [[nodiscard]] double *get_x() const noexcept;
        [[nodiscard]] double *get_y() const noexcept;

        [[nodiscard]] std::float128_t distance() const noexcept;

        [[maybe_unused]] [[nodiscard]] inline static uint point_cout() noexcept{
            return point_count_;
        }

        point &operator=(const point &rhs) noexcept;
        point &operator=(point &&rhs) noexcept;

        friend std::ostream &operator<<(std::ostream &os,
                                        const point &rhs) noexcept;

        auto operator<=>(const point &rhs) const = default;

    

    };


} // namespace entity

#endif
