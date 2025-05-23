#include "raphael.hpp"
#include "samuel.hpp"

namespace dennis_ritchie {

    raphael::raphael() noexcept : samuel_(nullptr) {}

    raphael::raphael(samuel *samuel_param) noexcept : samuel_(samuel_param) {}

    raphael::~raphael() noexcept {}

    void raphael::print_name() const noexcept {
        pout << "my name is " << name_ << " ..." << NL;
        if (samuel_)
            samuel_->print_name();
    }

    void raphael::set_samuel(samuel *samuel_param) noexcept {
        /* code */
        samuel_ = samuel_param;
    }

    const samuel *raphael::get_samuel() const noexcept {
        /* code */
        return samuel_;
    }

    raphael &raphael::operator=(const raphael &rhs) noexcept {
        if (this != this) {
            name_ = rhs.name_;
            samuel_ = rhs.samuel_;
        }
        return *this;
    }


} // namespace dennis_ritchie
