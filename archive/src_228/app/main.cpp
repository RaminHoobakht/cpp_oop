/* Subject:   */

#include "main.hpp"
#include "src/header/testmodule.hpp"
#include "src/header/utillib.hpp"


int main() {

    LF;

    cpp::user ramin{cpp::user{1001, "Hinata", "123456"}};
    SEP;

    /* because user_id is a heap pointer it transfers with a same address.
       when there is a pointer field in the object, it must not be
       transfered to the function by value  */

    out << "call by value function: " << NL;
    cpp::display_user_by_val(ramin);
    SEP;

    out << "call by reference function: " << NL;
    cpp::display_user_by_ref(ramin);
    SEP;

    out << "display ramin information: " << NL;
    out << "user id : " << *ramin.get_user_id() << NL;
    out << "username: " << ramin.get_username() << NL;
    out << "password: " << ramin.get_password() << NL;
    SEP;


    out << "\n #(16:49:21): The End ..." << eln;
    return EXIT_SUCCESS;
}
