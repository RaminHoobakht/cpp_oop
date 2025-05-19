#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    class square final {

    private:
        double m_side_{};

    public:
        square() noexcept;
        explicit square(double side_param) noexcept;
        ~square() noexcept;

        [[maybe_unused]] [[nodiscard]] double surface() const noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
