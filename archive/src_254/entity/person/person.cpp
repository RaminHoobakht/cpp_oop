#include "person.hpp"


/* definition */
namespace entity {

    person::person() noexcept {
        /* code */
        out << "Hello, I am person class ..." << NL;
    }

    person::person(uint person_id_param) noexcept :
        person("", "", person_id_param, 0) {
        /* code */
        out << "Hello, I am person class. constructor (1) ..." << NL;
    }

    person::person(uint person_id_param,
                   std::string_view first_name_param) noexcept :
        person(first_name_param, "", person_id_param, 0) {
        out << std::format(R"(Hello, I am {} {}. from constructor (2).)",
                           first_name_, last_name_)
            << NL;
    }

    person::person(uint person_id_param, std::string_view first_name_param,
                   std::string_view last_name_param) noexcept :
        person(first_name_param, last_name_param, person_id_param, 0) {
        /* code */
        out << std::format(R"(Hello, I am {} {}. from constructor (3).)",
                           first_name_, last_name_)
            << NL;
    }

    person::person(std::string_view first_name_param,
                   std::string_view last_name_param, uint person_id_param,
                   uint age_param) noexcept :
        first_name_(first_name_param), last_name_(last_name_param),
        person_id_(person_id_param), age_(age_param) {
        /* code */
        out << std::format(R"(Hello, I am {} {}. from constructor (4).)",
                           first_name_, last_name_)
            << NL;
    }

    person::person(const person &rhs) noexcept :
        person(rhs.first_name_, rhs.last_name_, rhs.person_id_, rhs.age_) {
        /* code */
        out << std::format(R"(Hello, I am {} {}. from copy constructor.)",
                           first_name_, last_name_)
            << NL;
    }

    person::person(person &&rhs) noexcept :
        first_name_(std::exchange(rhs.first_name_, "")),
        last_name_(std::exchange(rhs.last_name_, "")),
        person_id_(std::exchange(rhs.person_id_, 0)),
        age_(std::exchange(rhs.person_id_, 0)) {
        /* code */
        out << "Hello, I am person move constructor ..." << NL;
    }

    person::~person() noexcept {
        out << std::format(R"(Goodbye {} {}. See you later.)", first_name_,
                           last_name_)
            << NL;
    }


    /* ------------------------------------ */

    void person::set_person_id(uint person_id_param) noexcept {
        /* code */
        person_id_ = person_id_param;
    }

    void person::set_first_name(std::string_view first_name_param) noexcept {
        /* code */
        first_name_ = first_name_param;
    }

    void person::set_last_name(std::string_view last_name_param) noexcept {
        /* code */
        last_name_ = last_name_param;
    }

    void person::set_age(uint age_param) noexcept {
        /* code */
        age_ = age_param;
    }

    uint person::get_person_id() const noexcept {
        /* code */
        return person_id_;
    }

    const std::string &person::get_first_name() const noexcept {
        /* code */
        return first_name_;
    }

    const std::string &person::get_last_name() const noexcept {
        /* code */
        return last_name_;
    }

    uint person::get_age() const noexcept {
        /* code */
        return age_;
    }

    /* ------------------------------------ */

    person &person::operator=(const person &rhs) noexcept {
        if (this != &rhs) {
            first_name_ = rhs.first_name_;
            last_name_ = rhs.last_name_;
            person_id_ = rhs.person_id_;
            age_ = rhs.age_;
        }
        return *this;
    }

    person &person::operator=(person &&rhs) noexcept {
        if (this != &rhs) {
            first_name_ = std::exchange(rhs.first_name_, "");
            first_name_ = std::exchange(rhs.last_name_, "");
            person_id_ = std::exchange(rhs.person_id_, 0);
            person_id_ = std::exchange(rhs.age_, 0);
        }
        return *this;
    }


    /* ------------------------------------ */

    std::ostream &operator<<(std::ostream &os, person &rhs) noexcept {
        os << std::format(
                R"({}"person_id_":{}, "first_name_":"{}", "last_name_":"{}", "age_":{}{})",
                "{", rhs.person_id_, rhs.first_name_, rhs.last_name_, rhs.age_,
                "}");
        return os;
    }

    /* ------------------------------------ */

    void person::display_person() const noexcept {
        out << std::format(
                R"({}"person_id_":{}, "first_name_":"{}", "last_name_":"{}", "age_":{}{})",
                "{", person_id_, first_name_, last_name_, age_, "}");
        out << "-> " << this << NL;
    }

} // namespace entity
