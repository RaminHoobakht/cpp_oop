#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <format>
#include <ostream>
#include "utillib.hpp"


/* declaration */
namespace cpp {

    class samuel final {

    private:
        int x_{};
        int y_{};
        int z_{};

    public:
        explicit samuel(int x) noexcept;
        samuel(int x, int y) noexcept;
        samuel(int x, int y, int z) noexcept;
        ~samuel() noexcept;

        [[nodiscard]] int volume() const noexcept;
        friend std::ostream &operator<<(std::ostream &os,
                                        const samuel &rhs) noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
