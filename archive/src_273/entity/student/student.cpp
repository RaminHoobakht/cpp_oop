#include "student.hpp"


/* definition */
namespace entity {

    student::student() noexcept : my_student5_(nullptr) {
        /* code */
        pout << "default constructor ..." << NL;
    }

    student::student(const std::string_view first_name_param,
                     const std::string_view last_name_param,
                     unsigned int student_id_param,
                     unsigned int grade_param) noexcept :
        first_name_(first_name_param), last_name_(last_name_param),
        student_id_(student_id_param), grade_(grade_param),
        my_student5_(nullptr) {
        /* code */
        pout << "parameterized constructor ..." << NL;
    }

    student::student(const student &rhs) noexcept :
        student(rhs.first_name_, rhs.last_name_, rhs.student_id_, rhs.grade_) {
        /* code */
        my_student5_ = rhs.my_student5_;
        pout << "copy constructor ..." << NL;
    }

    student::student(student &&rhs) noexcept :
        student(std::exchange(rhs.first_name_, ""),
                std::exchange(rhs.last_name_, ""),
                std::exchange(rhs.student_id_, 0),
                std::exchange(rhs.grade_, 0)) {
        /* code */
        my_student5_ = std::exchange(rhs.my_student5_, nullptr);
        pout << "move constructor ..." << NL;
    }


    student::~student() noexcept {
        /* code */
        pout << "Goodbye student ..." << NL;
    }

    /* ------------------ */

    void student::set_student_id(const unsigned int id_param) noexcept {
        /* code */
        student_id_ = id_param;
    }

    void
    student::set_first_name(const std::string_view first_name_param) noexcept {
        /* code */
        first_name_ = first_name_param;
    }

    void
    student::set_last_name(const std::string_view last_name_param) noexcept {
        /* code */
        last_name_ = last_name_param;
    }

    void student::set_grade(const unsigned int grade_param) noexcept {
        /* code */
        grade_ = grade_param;
    }

    void student::set_my_student5(student *student_param) noexcept {
        /* code */
        my_student5_ = student_param;
    }

    /* ------------------- */

    unsigned int student::get_student_id() const noexcept {
        /* code */
        return student_id_;
    }

    const std::string &student::get_first_name() const noexcept {
        /* code */
        return first_name_;
    }

    const std::string &student::get_last_name() const noexcept {
        /* code */
        return last_name_;
    }

    unsigned int student::get_grade() const noexcept {
        /* code */
        return grade_;
    }

    student *student::get_my_student5() const noexcept {
        /* code */
        return my_student5_;
    }

    /* ----------------- */

    student &student::operator=(const student &rhs) noexcept {
        if (this != &rhs) {
            student_id_ = rhs.student_id_;
            first_name_ = rhs.first_name_;
            last_name_ = rhs.last_name_;
            grade_ = rhs.grade_;
            my_student5_ = rhs.my_student5_;
        }
        return *this;
    }

    student &student::operator=(student &&rhs) noexcept {
        if (this != &rhs) {
            student_id_ = std::exchange(rhs.student_id_, 0);
            first_name_ = std::exchange(rhs.first_name_, "");
            last_name_ = std::exchange(rhs.last_name_, "");
            grade_ = std::exchange(rhs.grade_, 0);
            my_student5_ = std::exchange(rhs.my_student5_, nullptr);
        }
        return *this;
    }

    void student::print_info() const noexcept {
        pout << std::format(
                        R"({}
                "student_id":{},
                "first_name":"{}",
                "last_name":"{}",
                "grade_":{}
            {})",
                        "{", student_id_, first_name_, last_name_, grade_, "}")
             << NL;
    }

} // namespace cpp
