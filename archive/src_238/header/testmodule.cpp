#include "testmodule.hpp"
#include <string_view>

#include "utillib.hpp"


/* definition */
namespace cpp {


    raphael::raphael() noexcept {
        /* code  */
        out << "Hello I am raphael ..." << NL;
    }

    raphael::raphael(const signed long long int number) noexcept {
        this->number_ = number;
    }

    /* const and noexcept are elements to create function overload */
    /* with const and noexcept  */
    signed long long int raphael::get_number() const noexcept {
        return this->number_;
    }

    /* const and noexcept are elements to create function overload */
    /* without const and with noexcept  */
    signed long long int raphael::get_number() noexcept {
        return this->number_;
    }

    /* it cannot overload without const and noexcept */
    // signed long long int raphael::get_number() {
    //     /* code */
    //     return this->number_;
    // }


    /* -------------------------------------- */

    /* constructors */

    user::user() noexcept {
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

    void display_user_info_by_val(user usr) noexcept {
        usr.print_info();
        std::string_view un{"@raphael"};
        std::string_view pw{"123456"};
        usr.set_user_id(115599LU)->set_username(un)->set_password(pw);
    }

    void display_user_info_const_by_val(const user usr) noexcept {
        usr.print_info();

        /* input object is constant and immutable.
           then it cannot modify. */

        /*std::string_view un{"@raphael"};
        std::string_view pw{"123456"};
        usr.set_user_id(115599LU)->set_username(un)->set_password(pw);*/
    }

    void display_user_info_by_ref(user &usr) noexcept {
        usr.print_info();
        std::string_view un{"@raphael"};
        std::string_view pw{"123456"};
        usr.set_user_id(115599LU)->set_username(un)->set_password(pw);
    }

    void display_user_info_const_by_ref(const user &usr) noexcept {
        usr.print_info();

        /* input object is constant and immutable.
           then it cannot modify. */

        /*std::string_view un{"@raphael"};
        std::string_view pw{"123456"};
        usr.set_user_id(115599LU)->set_username(un)->set_password(pw);*/
    }

    void display_user_info_by_pointer(user *usr) noexcept {
        usr->print_info();
        std::string_view un{"@raphael"};
        std::string_view pw{"123456"};
        usr->set_user_id(115599LU)->set_username(un)->set_password(pw);
    }

    void display_user_info_by_const_pointer(const user *usr) noexcept {
        usr->print_info();

        /* input object is constant and immutable.
           then it cannot modify. */

        /*std::string_view un{"@raphael"};
        std::string_view pw{"123456"};
        usr->set_user_id(115599LU)->set_username(un)->set_password(pw);*/
    }

} // namespace cpp
