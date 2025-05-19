#ifndef HEADER_POINT_HPP
#define HEADER_POINT_HPP

#include "point_headers.hpp"

namespace entity {

    class point final {

    private:
        double *x_{};
        double *y_{};

    public:
        point() noexcept;
        point(double *x, double *y) noexcept;
        point(const point &rhs) noexcept;
        point(point &&rhs) noexcept;
        ~point() noexcept;

        [[maybe_unused]] void set_x(double *x) noexcept;
        [[maybe_unused]] void set_y(double *y) noexcept;

        [[nodiscard]] double *get_x() const noexcept;
        [[nodiscard]] double *get_y() const noexcept;

        point &operator=(const point &rhs) noexcept;
        point &operator=(point &&rhs) noexcept;

        friend std::ostream &operator<<(std::ostream &os,
                                        const point &rhs) noexcept;

        auto operator<=>(const point &rhs) const = default;
    };


} // namespace entity


#endif
