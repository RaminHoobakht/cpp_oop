/*
 * Subject: using namespace
 *
 * */

#include "main.hpp"

namespace one {
    namespace two {
        namespace three {
            void print_message() noexcept;

            [[maybe_unused]] void print_message() noexcept {
                pout << "Using namespace aliases ..." << NL;
            }
        } // namespace three
    } // namespace two
} // namespace one


int main() {
    /* code */

    namespace np = one::two::three;

    np::print_message();

    pout << "\n #(07:32:57): The End ..." << eln;
    return EXIT_SUCCESS;
}
