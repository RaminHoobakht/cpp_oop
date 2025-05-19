#include "testmodule.hpp"

/* definition */
namespace cpp {

    user::user() noexcept {
        this->user_id_ = 1001;
        this->password_ = 3000333;
    }

    user::~user() noexcept { out << "Good Bya User ..." << NL; }

    user *user::set_user_id(const unsigned long int user_id) noexcept {
        this->user_id_ = user_id;
        return this;
    }

    user *user::set_password(const unsigned long int password) noexcept {
        this->password_ = password;
        return this;
    }

    unsigned long int user::get_user_id() const noexcept {
        return this->user_id_;
    }

    unsigned long int user::get_password() const noexcept {
        return this->password_;
    }

    /* -------------------------------------- */

    user_two::user_two() noexcept {
        this->user_id_ = 1001;
        this->password_ = 3000333;
    }

    user_two::~user_two() noexcept { out << "Good Bya User ..." << NL; }

    user_two &user_two::set_user_id(const unsigned long int user_id) noexcept {
        this->user_id_ = user_id;
        return *this;
    }

    user_two &
    user_two::set_password(const unsigned long int password) noexcept {
        this->password_ = password;
        return *this;
    }

    unsigned long int user_two::get_user_id() const noexcept {
        return this->user_id_;
    }

    unsigned long int user_two::get_password() const noexcept {
        return this->password_;
    }


} // namespace cpp
