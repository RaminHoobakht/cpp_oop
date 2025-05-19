#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <string>
#include "utillib.hpp"

/* declaration */
namespace cpp {


    class person {

    private:
        std::string first_name_{};
        std::string last_name_{};
        uint age_{};
        int padding{};

    public:
        person(std::string name, std::string family, uint age) noexcept;
        ~person() noexcept;

        [[maybe_unused]] void set_first_name(const std::string &name) noexcept;
        [[maybe_unused]] void set_last_name(const std::string &family) noexcept;
        [[maybe_unused]] void set_age(uint age) noexcept;

        [[maybe_unused]] [[nodiscard]] const std::string &
        get_first_name() const noexcept;
        [[maybe_unused]] [[nodiscard]] const std::string &
        get_last_name() const noexcept;
        [[maybe_unused]] [[nodiscard]] uint get_age() const noexcept;
    };


} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
