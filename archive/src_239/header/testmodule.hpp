#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <string>
#include <string_view>

/* declaration */
namespace cpp {

    class person final {

    private:
        unsigned long long int person_id_{0};
        std::string first_name_{"fn"};
        std::string last_name_{"ln"};
        unsigned int age_{0};
        unsigned int temp_{0};


    public:
        person() noexcept;
        person(unsigned long long int person_id, std::string_view first_name,
               std::string_view last_name, unsigned int age) noexcept;
        ~person() noexcept;

        [[maybe_unused]] [[nodiscard]] unsigned long long int &
        get_person_id() noexcept;
        [[maybe_unused]] [[nodiscard]] std::string &get_fist_name() noexcept;
        [[maybe_unused]] [[nodiscard]] std::string &get_last_name() noexcept;
        [[maybe_unused]] [[nodiscard]] unsigned int &get_age() noexcept;
        [[maybe_unused]] void print_information() noexcept;
        [[maybe_unused]] void print_information() const noexcept;
    };

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
