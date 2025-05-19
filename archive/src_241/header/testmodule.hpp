#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP


/* declaration */
namespace cpp {

    class raphael final {

    private:
        int number_{};

    public:
        raphael() noexcept;
        ~raphael() noexcept;
        explicit raphael(int number) noexcept;

        [[maybe_unused]] void set_number(int number) noexcept;
        [[maybe_unused]] [[nodiscard]] int get_number() noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
