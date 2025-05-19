/* Subject: static constant pre C++17 */

#include "main.hpp"

namespace cpp {

    class one final {

    private:
        /* A static const variable: it can initial in header.
         */
        static const int x_{15};

    public:
        // [[nodiscard]] explicit one(const int x_param) noexcept;
        ~one() noexcept;
        // inline void set_x(int x_param) noexcept;
        [[nodiscard]] inline int get_x() const noexcept;
    };


    // one::one(const int x_param) noexcept /*:  x_{x_param} */ {
    //     /* code */
    //     // one::x_ = x_param;
    //     out << "class one constructor ..." << NL;
    // }

    one::~one() noexcept { out << "Goodbye ..." << NL; }

    // inline void one::set_x(int x_param) noexcept {
    //     /* code  */
    //     /* one::x_ = x_param; */
    // }

    inline int one::get_x() const noexcept {
        /* code */
        return one::x_;
    }

    /* int cpp::one::x_{0};  */

} // namespace cpp


int main() {
    LF;

    cpp::one my_one{};
    out << my_one.get_x() << NL;

    out << "\n #(20:40:45): The End ..." << eln;
    return EXIT_SUCCESS;
}

//(20:47:19)

//(21:02:25)
