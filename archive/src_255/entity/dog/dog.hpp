#ifndef HEADER_DOG_HPP
#define HEADER_DOG_HPP

#pragma once

#include "dog_headers.hpp"

namespace entity {

    class dog final {

    private:
        std::string dog_name_{};
        std::string dog_breed_{};
        uint dog_age_{};
        uint padding{};
        friend void display_dog_info(const dog &rhs) noexcept;
        friend void display_dog_info_() noexcept;

    public:
        dog() noexcept = delete;
        dog(std::string_view dog_name_param, std::string_view dog_breed_param,
            uint dog_age_param) noexcept;
        ~dog() noexcept;
    };

} // namespace name

#endif
