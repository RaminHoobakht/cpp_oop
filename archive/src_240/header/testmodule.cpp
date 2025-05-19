#include "testmodule.hpp"


#include "utillib.hpp"


/* definition */
namespace cpp {

    person::person() noexcept {
        /* hello message */
        out << "Hello, I am person class ..." << NL;
    }

    person::person(ulli person_id, std::string_view first_name,
                   std::string_view last_name, uint age) noexcept {
        this->person_id_ = person_id;
        this->first_name_ = first_name;
        this->last_name_ = last_name;
        this->age_ = age;
    }

    person::~person() noexcept {
        /* code */
        out << "Good Bay person ..." << NL;
    }

    ulli &person::person_id() noexcept {
        /* code */
        return this->person_id_;
    }

    std::string &person::fist_name() noexcept {
        /* code */
        return this->first_name_;
    }

    std::string &person::last_name() noexcept {
        /* code */
        return this->last_name_;
    }

    uint &person::age() noexcept {
        /* code */
        return this->age_;
    }

    const ulli &person::person_id() const noexcept {
        /* code */
        return this->person_id_;
    }

    const std::string &person::fist_name() const noexcept {
        /* code */
        return this->first_name_;
    }

    const std::string &person::last_name() const noexcept {
        /* code */
        return this->last_name_;
    }

    const uint &person::age() const noexcept {
        /* code */
        return this->age_;
    }


    void person::display_info() noexcept {
        out << "person id : " << this->person_id() << NL;
        out << "first name: " << this->fist_name() << NL;
        out << "last name : " << this->last_name() << NL;
        out << "age       : " << this->age() << NL;
    }

    void person::display_info() const noexcept {
        out << "person id : " << this->person_id() << NL;
        out << "first name: " << this->fist_name() << NL;
        out << "last name : " << this->last_name() << NL;
        out << "age       : " << this->age() << NL;
    }


} // namespace cpp
