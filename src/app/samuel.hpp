#ifndef HEADER_SAMUEL_HPP
#define HEADER_SAMUEL_HPP

#pragma once

#include <string>
#include "../util/util.hpp"


namespace dennis_ritchie {


    class samuel final {

    private:
        std::string name_{"Samuel"};

    public:
        [[maybe_unused]] void print_name() const noexcept;
    };

} // namespace dennis_ritchie
#endif
