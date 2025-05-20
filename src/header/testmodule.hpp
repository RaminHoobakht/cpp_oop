#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#pragma once

#include "tm_header.hpp"


/* declaration */
namespace cpp {

    class student final {

    private:
        std::string first_name_{};
        std::string last_name_{};
        unsigned int student_id_{};
        unsigned int grade_{};

    private:
        // student my_student1{}; // Error: incomplete type
        // const student my_student2; // Error: incomplete type
        // static student my_student3;
        // static const student my_student4;
        student *my_student5_;

    public:
        student() noexcept;
        student(const std::string_view first_name_param,
                const std::string_view last_name_param,
                unsigned int student_id_param,
                unsigned int grade_param) noexcept;
        student(const student &rhs) noexcept;
        student(student &&rhs) noexcept;
        ~student() noexcept;

        /* -------------- */

        [[maybe_unused]] void
        set_student_id(const unsigned int id_param) noexcept;
        [[maybe_unused]] void
        set_first_name(const std::string_view first_name_param) noexcept;
        [[maybe_unused]] void
        set_last_name(const std::string_view last_name_param) noexcept;
        [[maybe_unused]] void
        set_grade(const unsigned int grade_param) noexcept;
        [[maybe_unused]] void set_my_student5(student *student_param) noexcept;

        /* -------------- */

        [[nodiscard]] unsigned int get_student_id() const noexcept;
        [[nodiscard]] const std::string &get_first_name() const noexcept;
        [[nodiscard]] const std::string &get_last_name() const noexcept;
        [[nodiscard]] unsigned int get_grade() const noexcept;
        [[nodiscard]] student *get_my_student5() const noexcept;

        /* -------------- */

        student &operator=(const student &rhs) noexcept;
        student &operator=(student &&rhs) noexcept;

        void print_info() const noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
