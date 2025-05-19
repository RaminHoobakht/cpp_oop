#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

/* declaration */
namespace cpp {

    struct point {
        double x{};
        double y{};
    };


    void print_pointer(point point_param) noexcept;
    void print_pointer(double x, double y) noexcept;


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
