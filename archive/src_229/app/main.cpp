/* Subject:   */

#include "main.hpp"


int main() {

    LF;

    cpp::user ramin{};

    ramin.set_user_id(70001)->set_password(55669933);
    out << "user id : " << ramin.get_user_id() << NL;
    out << "password: " << ramin.get_password() << NL;
    out << "size of ramin object is: " << sizeof(ramin) << NL;
    SEP;


    cpp::user_two ramin_two{};

    ramin_two.set_user_id(888888).set_password(998877665544);
    out << "user id : " << ramin_two.get_user_id() << NL;
    out << "password: " << ramin_two.get_password() << NL;
    out << "size of ramin object is: " << sizeof(ramin_two) << NL;


    out << "\n #(01:49:28): The End ..." << eln;
    return EXIT_SUCCESS;
}
