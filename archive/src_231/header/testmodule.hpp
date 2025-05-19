#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP


#include <string>
#include <string_view>

/* declaration */
namespace cpp {

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
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
