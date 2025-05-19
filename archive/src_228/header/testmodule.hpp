#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <string>
#include <string_view>

using slli = signed long long int;

/* declaration */
namespace cpp {

    class user {

    private:
        slli *user_id_{};
        std::string username_{};
        std::string password_{};

    public:
        user() noexcept;
        user(slli user_id, std::string_view username,
             std::string_view password) noexcept;
        user(user &other) = default;
        ~user() noexcept;

        [[maybe_unused]] void set_user_id(slli *user_id) noexcept;
        [[maybe_unused]] void set_username(std::string_view username) noexcept;
        [[maybe_unused]] void set_passwor(std::string_view password) noexcept;

        [[maybe_unused]] [[nodiscard]] slli *get_user_id() const noexcept;
        [[maybe_unused]] [[nodiscard]] const std::string &
        get_username() const noexcept;
        [[maybe_unused]] [[nodiscard]] const std::string &
        get_password() const noexcept;

        user &operator=(const user &rhs) noexcept = default;
    };

    void display_user_by_ref(const user &usr) noexcept;
    void display_user_by_val(user usr) noexcept;


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
