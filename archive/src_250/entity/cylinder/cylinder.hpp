#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace entity {

    class cylinder final {

    private:
        double base_radius_{1};
        double height_{2};

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
    };


} // namespace entity

#endif /* HEADER_TEST_MODULE_HPP */
