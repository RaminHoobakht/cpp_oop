#ifndef HEADER_RAPHAEL_HPP
#define HEADER_RAPHAEL_HPP

#pragma once

#include <string>
#include "../util/util.hpp"

namespace dennis_ritchie {

    class samuel;

    class raphael final {

    private:
        std::string name_{"Raphael"};
        samuel *samuel_;

    public:
        raphael() noexcept;
        explicit raphael(samuel *samuel_param) noexcept;
        raphael(const raphael &rhs) noexcept = default;
        ~raphael() noexcept;
        raphael &operator=(const raphael &rhs) noexcept;

        [[maybe_unused]] void print_name() const noexcept;
        [[maybe_unused]] void set_samuel(samuel *samuel_param) noexcept;
        [[nodiscard]] const samuel *get_samuel() const noexcept;
    };

} // namespace dennis_ritchie

#endif
