/* Subject:   */

#include "main.hpp"


int main() {

	LF;

    const cpp::user hinata{1001, "Hinata_Chikao", "HC@123456"};
    SEP;

	/* it can only read from a constant object */
    out << "user id : " << hinata.get_user_id() << NL;
    out << "username: " << hinata.get_username() << NL;
    out << "password: " << hinata.get_password() << NL;
    SEP;

    out << "\n #(17:50:40): The End ..." << eln;
    return EXIT_SUCCESS;
}
