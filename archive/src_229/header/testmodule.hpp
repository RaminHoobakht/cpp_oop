#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP


#include "src/header/utillib.hpp"

/* declaration */
namespace cpp {

    class user {

    private:
        unsigned long int user_id_{};
        unsigned long int password_{};

    public:
        user() noexcept;

        ~user() noexcept;

        [[maybe_unused]] user *set_user_id(unsigned long int user_id) noexcept;

        [[maybe_unused]] user *
        set_password(unsigned long int password) noexcept;

        [[maybe_unused]] [[nodiscard]] unsigned long int
        get_user_id() const noexcept;
        [[maybe_unused]] [[nodiscard]] unsigned long int
        get_password() const noexcept;
    };

    class user_two {

    private:
        unsigned long int user_id_{};
        unsigned long int password_{};

    public:
        user_two() noexcept;

        ~user_two() noexcept;

        [[maybe_unused]] user_two &
        set_user_id(unsigned long int user_id) noexcept;

        [[maybe_unused]] user_two &
        set_password(unsigned long int password) noexcept;

        [[maybe_unused]] [[nodiscard]] unsigned long int
        get_user_id() const noexcept;
        [[maybe_unused]] [[nodiscard]] unsigned long int
        get_password() const noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
