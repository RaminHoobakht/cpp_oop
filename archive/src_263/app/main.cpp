/* Subject: static constant pre C++17 -> normal variable */

#include "main.hpp"

namespace cpp {

    class one final {

    private:
        /* A static variable: it cannot initial in header and in constructor
           by initializer list. it must be initial in somewhere out of class.
         */
        static int x_;

    public:
        [[nodiscard]] explicit one(const int x_param) noexcept;
        ~one() noexcept;
        inline void set_x(int x_param) noexcept;
        [[nodiscard]] inline int get_x() const noexcept;
    };


    one::one(const int x_param) noexcept {
        /* code */
        one::x_ = x_param;
        out << "class one constructor ..." << NL;
    }

    one::~one() noexcept { out << "Goodbye ..." << NL; }

    inline void one::set_x(int x_param) noexcept {
        /* code  */
        one::x_ = x_param;
    }

    inline int one::get_x() const noexcept {
        /* code */
        return one::x_;
    }

    int cpp::one::x_{0};

} // namespace cpp


int main() {
    LF;

    cpp::one my_one{120};
    out << my_one.get_x() << NL;

    out << "\n #(20:40:45): The End ..." << eln;
    return EXIT_SUCCESS;
}
