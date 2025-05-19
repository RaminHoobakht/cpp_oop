#ifndef HEADER_TEST_MODULE_HPP
#define HEADER_TEST_MODULE_HPP

#include <string>
#include <string_view>

using ulli = unsigned long long int;


/* declaration */
namespace cpp {

    class person final {

    private:
        ulli person_id_{0};
        std::string first_name_{"fn"};
        std::string last_name_{"ln"};
        uint age_{0};
        uint temp_{0};


    public:
        person() noexcept;
        person(ulli person_id, std::string_view first_name,
               std::string_view last_name, uint age) noexcept;
        ~person() noexcept;

        [[maybe_unused]] [[nodiscard]] ulli &person_id() noexcept;
        [[maybe_unused]] [[nodiscard]] std::string &fist_name() noexcept;
        [[maybe_unused]] [[nodiscard]] std::string &last_name() noexcept;
        [[maybe_unused]] [[nodiscard]] uint &age() noexcept;

        [[maybe_unused]] [[nodiscard]] const ulli &person_id() const noexcept;
        [[maybe_unused]] [[nodiscard]] const std::string &
        fist_name() const noexcept;
        [[maybe_unused]] [[nodiscard]] const std::string &
        last_name() const noexcept;
        [[maybe_unused]] [[nodiscard]] const uint &age() const noexcept;

        [[maybe_unused]] void display_info() noexcept;
        [[maybe_unused]] void display_info() const noexcept;
    };

} // namespace cpp

#endif /* HEADER_TEST_MODULE_HPP */
