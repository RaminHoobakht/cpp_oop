#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    class cylinder {
    private:
        long double base_radius_{0.0};
        long double base_height_{0.0};

    public:
        cylinder() noexcept;
        cylinder(long double radius, long double height) noexcept;
        ~cylinder() noexcept;

        [[maybe_unused]] void set_radius(long double radius) noexcept;
        [[maybe_unused]] void set_height(long double height) noexcept;
        [[maybe_unused]] [[nodiscard]] long double get_radius() const noexcept;
        [[maybe_unused]] [[nodiscard]] long double get_height() const noexcept;
        [[maybe_unused]] [[nodiscard]] long double volume() const noexcept;
        [[maybe_unused]] [[nodiscard]] cylinder &
        operator=(const cylinder &rhs) noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
