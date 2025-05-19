#include "testmodule.hpp"

#include "utillib.hpp"

/* definition */
namespace cpp {

    /* constructors */

    user::user() noexcept {
        /* code */
        LF;
        out << "Hello I am user class ..." << NL;
        LF;
    }

    user::user(unsigned long int user_id, std::string_view username,
               std::string_view password) noexcept {
        this->user_id_ = user_id;
        this->username_ = username;
        this->password_ = password;
        LF;
        out << "Hello, I am user " << this->username_ << NL;
        LF;
    }

    user::~user() noexcept {
        /* code */
        LF;
        out << "Good Bya User ..." << NL;
        LF;
    }

    /* setters */

    user *user::set_user_id(const unsigned long int user_id) noexcept {
        this->user_id_ = user_id;
        return this;
    }

    user *user::set_username(std::string_view username) noexcept {
        this->username_ = username;
        return this;
    }

    user *user::set_password(std::string_view password) noexcept {
        this->password_ = password;
        return this;
    }

    /* getters */

    unsigned long int user::get_user_id() const noexcept {
        return this->user_id_;
    }

    const std::string &user::get_username() const noexcept {
        return this->username_;
    }

    const std::string &user::get_password() const noexcept {
        return this->password_;
    }

    void user::print_info() const noexcept {
        out << "address : " << this << NL;
        out << "user id : " << this->user_id_ << NL;
        out << "username: " << this->username_ << NL;
        out << "password: " << this->password_ << NL;
        SEP;
    }

} // namespace cpp
