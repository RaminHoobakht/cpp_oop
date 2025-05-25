/* Subject: using nested class */

#include "main.hpp"

class alignas(8) raphael final {

private:
    int x_{};
    int y_{};
    class samuel {
    public:
        int add(const int a, const int b) noexcept;
    };

public:
    raphael() noexcept;
    raphael(const int x_param, const int y_param) noexcept;
    [[nodiscard]] int get_add() noexcept;
};


int main() {
    /* code */

    raphael my_raphael{100, 200};

    auto r{my_raphael.get_add()};
    pout << "result is: " << r << NL;


    pout << "\n #(22:08:30): The End ..." << eln;
    return EXIT_SUCCESS;
}

int raphael::samuel::add(const int a, const int b) noexcept {
    /* code */
    return a + b;
}

raphael::raphael() noexcept {
    /* code */
    pout << "default constructor ..." << NL;
}

raphael::raphael(const int x_param, const int y_param) noexcept :
    x_{x_param}, y_{y_param} {
    /* code */
    pout << "parameterized constructor ... " << NL;
}

int raphael::get_add() noexcept {
    /* code */
    samuel my_samuel{};
    return my_samuel.add(x_, y_);
}

//(05:29:17)
