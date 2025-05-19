#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include "person_headers.hpp"

/* declaration */
namespace entity {

    class person {

    private:
        std::string first_name_{};
        std::string last_name_{};
        uint person_id_{};
        uint age_{};

    public:
        person() noexcept;
        explicit person(uint person_id_param) noexcept;
        person(uint person_id_param,
               std::string_view first_name_param) noexcept;
        person(uint person_id_param, std::string_view first_name_param,
               std::string_view last_name_param) noexcept;
        person(std::string_view first_name_param,
               std::string_view last_name_param, uint person_id_param,
               uint age_param) noexcept;
        person(const person &rhs) noexcept;
        person(person &&rhs) noexcept;
        ~person() noexcept;

        /* --------------------------- */

        void set_person_id(uint person_id_param) noexcept;
        void set_first_name(std::string_view first_name_param) noexcept;
        void set_last_name(std::string_view last_name_param) noexcept;
        void set_age(uint age_param) noexcept;

        [[nodiscard]] uint get_person_id() const noexcept;
        [[nodiscard]] const std::string &get_first_name() const noexcept;
        [[nodiscard]] const std::string &get_last_name() const noexcept;
        [[nodiscard]] uint get_age() const noexcept;


        /* --------------------------- */

        person &operator=(const person &rhs) noexcept;
        person &operator=(person &&rhs) noexcept;

        /* --------------------------- */

        friend std::ostream &operator<<(std::ostream &os, person &rhs) noexcept;

        /* --------------------------- */

        void display_person() const noexcept;
    };

} // namespace entity

#endif /* HEADER_TEST_MODULE_HPP */
