#ifndef HEADER_OUTER_HPP
#define HEADER_OUTER_HPP

#pragma once

#include <iostream>

class alignas(8) outer final {
private:
    int padding{};
    int m_var1;
    double m_var2;
    inline static int static_int{45};

public:
    class inner final {
    private:
        double inner_var;

    public:
        inner() noexcept;
        explicit inner(double double_param) noexcept;

        [[nodiscard]] double get_double() const noexcept {
            std::cout << "static int: " << static_int << std::endl;
            return inner_var;
        }

        void do_something_with_outer(outer *outer_param) {
            std::cout << "This is inner access private parts of outer object: "
                      << outer_param->m_var1 << std::endl;
        }
    };

public:
    outer(int int_param, double double_param) noexcept;
    outer() noexcept;
    ~outer() noexcept;

    void do_something() noexcept;
};

#endif /* HEADER_OUTER_HPP */
