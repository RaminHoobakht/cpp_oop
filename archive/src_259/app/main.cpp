/* Subject:  */

#include "main.hpp"

namespace cpp {

    class raphael final {

    private:
        double x_;
        double y_;

        /* only in C++17 and later it is possible inline static variable
           to avoid initializing static variable out of the class. */
        inline static uint raphael_count_{};

    public:
        raphael() = delete;
        raphael(double x_param, double y_param) noexcept;
        ~raphael() noexcept;
        void display_raphael() const noexcept;
        static inline uint count() noexcept { return raphael_count_; }
    };


    raphael::raphael(double x_param, double y_param) noexcept :
        x_(x_param), y_(y_param) {
        /* code */
        ++raphael_count_;
        out << "I am raphael constructor ..." << NL;
    }

    raphael::~raphael() noexcept {
        --raphael_count_;
        out << "Goodbye raphael ..." << NL;
    }

    void raphael::display_raphael() const noexcept {
        out << " X: " << x_ << NL;
        out << " Y: " << y_ << NL;
    }

} // namespace cpp


int main() {

    LF;

    cpp::raphael raphael_one{10.23, 32.56};

    out << "count is: " << cpp::raphael::count() << NL;

    out << "\n #(03:47:14): The End ..." << eln;
    return EXIT_SUCCESS;
}
