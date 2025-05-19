#include "testmodule.hpp"
#include "src/header/utillib.hpp"

/* definition */
namespace cpp {

    person::person(std::string name, std::string family,
                   const uint age) noexcept :
        first_name_(std::move(name)), last_name_(std::move(family)), age_(age) {
        out << "Hello " << this->first_name_ << SP << this->last_name_ << NL;
    }

    person::~person() noexcept {
        /* code */
        out << "Good Bya person ..." << NL;
    }

    void person::set_first_name(const std::string &name) noexcept {
        this->first_name_ = name;
    }

    void person::set_last_name(const std::string &family) noexcept {
        this->last_name_ = family;
    }

    void person::set_age(const uint age) noexcept {
        /* set age */
        this->age_ = age;
    }

    const std::string &person::get_first_name() const noexcept {
        return this->first_name_;
    }

    const std::string &person::get_last_name() const noexcept {
        return this->last_name_;
    }

    uint person::get_age() const noexcept {
        /* return age */
        return this->age_;
    }


} // namespace cpp
