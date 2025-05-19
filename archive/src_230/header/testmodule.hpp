#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    class my_number {

    private:
        int number_{};

    public:
        my_number() noexcept;
        explicit my_number(int number) noexcept;
        ~my_number() noexcept;

        [[maybe_unused]] void set_number(int number) noexcept;
        [[maybe_unused]] [[nodiscard]] int get_number() const noexcept;

        my_number &operator=(const my_number &rhs) noexcept = default;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
