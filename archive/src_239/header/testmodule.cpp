#include "testmodule.hpp"


#include "utillib.hpp"


/* definition */
namespace cpp {

    person::person() noexcept {
        /* hello message */
        out << "Hello, I am person class ..." << NL;
    }

    person::person(unsigned long long int person_id,
                   std::string_view first_name, std::string_view last_name,
                   unsigned int age) noexcept {
        this->person_id_ = person_id;
        this->first_name_ = first_name;
        this->last_name_ = last_name;
        this->age_ = age;
    }

    person::~person() noexcept {
        /* code */
        out << "Good Bay person ..." << NL;
    }

    unsigned long long int &person::get_person_id() noexcept {
        /* code */
        return this->person_id_;
    }

    std::string &person::get_fist_name() noexcept {
        /* code */
        return this->first_name_;
    }

    std::string &person::get_last_name() noexcept {
        /* code */
        return this->last_name_;
    }

    unsigned int &person::get_age() noexcept {
        /* code */
        return this->age_;
    }

    void person::print_information() noexcept {
        out << "person id : " << this->get_person_id() << NL;
        out << "first name: " << this->get_fist_name() << NL;
        out << "last name : " << this->get_last_name() << NL;
        out << "age       : " << this->get_age() << NL;
    }

    void person::print_information() const noexcept {
        out << "person id : " << this->person_id_ << NL;
        out << "first name: " << this->first_name_ << NL;
        out << "last name : " << this->last_name_ << NL;
        out << "age       : " << this->age_ << NL;
    }


} // namespace cpp
