#include "testmodule.hpp"
#include <string_view>

#include "utillib.hpp"


/* definition */
namespace cpp {

    user::user() noexcept {
        /* code */
        out << "Hello user ..." << NL;
    }

    user::user(slli user_id, std::string_view username,
               std::string_view password) noexcept {
        this->user_id_ = new slli{user_id};
        this->username_ = username;
        this->password_ = password;

        out << "Hello " << username << NL;
    }

    user::~user() noexcept {
        /* print good bya message */
        delete this->user_id_;
        out << "Good Bya " << this->username_ << NL;
    }

    void user::set_user_id(slli *user_id) noexcept {
        /* code */
        this->user_id_ = user_id;
    }

    void user::set_username(std::string_view username) noexcept {
        this->username_ = username;
    }

    void user::set_passwor(std::string_view password) noexcept {
        this->password_ = password;
    }

    slli *user::get_user_id() const noexcept {
        /* code */
        return this->user_id_;
    }

    const std::string &user::get_username() const noexcept {
        /* code */
        return this->username_;
    }

    const std::string &user::get_password() const noexcept {
        return this->password_;
    }


    void display_user_by_ref(const user &usr) noexcept {
        out << "user id : " << *usr.get_user_id() << NL;
        out << "username: " << usr.get_username() << NL;
        out << "password: " << usr.get_password() << NL;
        SEP;
    }

    void display_user_by_val(const user usr) noexcept {
        out << "user id : " << *usr.get_user_id() << NL;
        out << "username: " << usr.get_username() << NL;
        out << "password: " << usr.get_password() << NL;
        SEP;
    }


} // namespace cpp
