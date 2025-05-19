/* Subject: static constant pre C++17 -> normal variable */

#include "main.hpp"

namespace cpp {

    class one final {

    private:
        /* A const variable: it can initial in header and in constructor
           by initializer list. but not any other place line in setter function.
         */
        const int x_{15};

    public:
        [[nodiscard]] explicit one(const int x_param) noexcept;
        ~one() noexcept;
        // inline void set_x(int x_param) noexcept;
        [[nodiscard]] inline int get_x() const noexcept;
    };


    one::one(const int x_param) noexcept : x_{x_param} {
        /* code */
        out << "class one constructor ..." << NL;
    }

    one::~one() noexcept { out << "Goodbye ..." << NL; }

    // inline void one::set_x(int x_param) noexcept {
    //     /* code  */
    //     x_ = x_param;
    // }

    inline int one::get_x() const noexcept {
        /* code */
        return x_;
    }


} // namespace cpp


int main() {
    LF;

    cpp::one my_one{120};
    out << my_one.get_x() << NL;

    out << "\n #(20:36:20): The End ..." << eln;
    return EXIT_SUCCESS;
}
