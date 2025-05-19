#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    class raphael final {

    private:
        int x{};
        int y{};
        int z{};
        mutable int counter{};

    public:
        raphael() noexcept;
        ~raphael() noexcept;

        [[maybe_unused]] void display_info() const noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
