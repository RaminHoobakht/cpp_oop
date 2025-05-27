#include "outer.hpp"

outer::outer(int int_param, double double_param) noexcept :
    m_var1(int_param), m_var2(double_param) {
    std::cout << "Hello outer (prmcons) ..." << std::endl;
}

outer::outer() noexcept : outer(0, 0.0) {
    /* code */
    std::cout << "Hello outer ..." << std::endl;
}

outer::~outer() noexcept {
    /* code */
    std::cout << "Goodbye outer ..." << std::endl;
}

void outer::do_something() noexcept {
    /* code */
    inner inner1(10.0);
    std::cout << "create object with value: " << inner1.get_double()
              << std::endl;
}

outer::inner::inner() noexcept : inner(0.0) {
    /* code */
    std::cout << "Hello innder ..." << std::endl;
}

outer::inner::inner(double double_param) noexcept : inner_var(double_param) {
    /* code */
    std::cout << "Hello inner (prmcons) ..." << std::endl;
}
