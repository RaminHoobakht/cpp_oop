#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#pragma once

#include "user_headers.hpp"

namespace entity {

    class user {

    private:
        unsigned long int user_id_{};
        std::string username_{};
        std::string password_{};

    public:
        /* constructors */
        user() noexcept;
        user(unsigned long int user_id, std::string_view username,
             std::string_view password) noexcept;
        ~user() noexcept;

        /* getters */
        [[maybe_unused]] user *set_user_id(unsigned long int user_id) noexcept;
        [[maybe_unused]] user *set_username(std::string_view username) noexcept;
        [[maybe_unused]] user *set_password(std::string_view password) noexcept;

        /* setters */
        [[maybe_unused]] [[nodiscard]] unsigned long int
        get_user_id() const noexcept;
        [[maybe_unused]] [[nodiscard]] const std::string &
        get_username() const noexcept;
        [[maybe_unused]] [[nodiscard]] const std::string &
        get_password() const noexcept;

        /* operator overloading */
        user &operator=(const user &rhs) noexcept = default;

        [[maybe_unused]] void print_info() const noexcept;
    };

    void display_user_info_by_val(user usr) noexcept;
    void display_user_info_const_by_val(user usr) noexcept;
    void display_user_info_by_ref(user &usr) noexcept;
    void display_user_info_const_by_ref(const user &usr) noexcept;
    void display_user_info_by_pointer(user *usr) noexcept;
    void display_user_info_by_const_pointer(const user *usr) noexcept;


} // namespace entity

#endif /* HEADER_TEST_MODULE_HPP */
