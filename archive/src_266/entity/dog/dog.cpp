#include "dog.hpp"

namespace entity {
    dog::dog(std::string_view dog_name_param, std::string_view dog_breed_param,
             uint dog_age_param) noexcept : dog_name_(dog_name_param), dog_breed_(dog_breed_param),
                                            dog_age_(dog_age_param) {
        pout << "I am Dog constructor ..." << NL;
    }


    dog::~dog() noexcept {
        pout << "Goodbye Dog ..." << NL;
    }


    void display_dog_info(const dog &rhs) noexcept {
        pout << std::format(
               R"({}"dog_name_":"{}", "dog_breed_":"{}","dog_age_":{}{})",
               "{", rhs.dog_name_, rhs.dog_breed_, rhs.dog_age_, "}")
            << NL;
    }

} // namespace entity
