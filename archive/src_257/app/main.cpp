/* Subject: friend class */

#include "main.hpp"

namespace cpp {

    class dog final {

    private:
        std::string dog_name_{};
        uint dog_age_{};
        uint padding_{};

    public:
        dog(std::string_view dog_name_param, uint dog_age_param) noexcept;
        friend class cat;
    };

    /* -------------- */

    /* cat class is friend of dog class */
    class cat final {

    private:
        std::string cat_name_{};

    public:
        explicit cat(std::string_view cat_name_param) noexcept;
        void display_info_dog(const dog &rhs) const noexcept;
    };

    /* Dog -------- */

    dog::dog(std::string_view dog_name_param, uint dog_age_param) noexcept :
        dog_name_(dog_name_param), dog_age_(dog_age_param) {
        /* code */
        out << "I am Dog constructor ..." << NL;
    }

    /* Cat -------- */

    cat::cat(std::string_view cat_name_param) noexcept :
        cat_name_(cat_name_param) {
        /* code */
        out << "I am cat constructor ..." << NL;
    }

    void cat::display_info_dog(const dog &rhs) const noexcept {
        /* code */
        out << "dog name: " << rhs.dog_name_ << NL;
        out << "dog age : " << rhs.dog_age_ << NL;
    }

} // namespace cpp


int main() {

    LF;

    cpp::dog dog_one{"mario", 3};
    cpp::cat cat_one{"fanci"};
    SEP;

    cat_one.display_info_dog(dog_one);
    SEP;

    out << "\n #(19:25:59): The End ..." << eln;
    return EXIT_SUCCESS;
}
