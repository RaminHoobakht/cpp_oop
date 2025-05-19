/* Subject: one function is getter and setter
   if the object be const, it must all getter-setter
   function overload with const for output and definition
   of function  */

/*
    - For a constant object, you can only call the constant member function.

    - Constant objects are completely non-modifiable (immutable). The
      compiler won't allow calling a member function that modifies
      the constant object in any way.

    - We are not allowed to modify the object in any way inside constant
      member functions.

    - Just as we're not allowed to directly modify the object inside
      the constant member functions, we're not allowed to call a method
      that modifies the object indirectly, either.

    - Any attempt to modify an object's member variable (direct or indirect)
      from within constant member functions will result in a compiler error.

    - You can not call any non-constant member functions from within a constant
      member function.

*/


#include "main.hpp"

int main() {

    LF;


    // cpp::person hinata{};
    const cpp::person hinata{};

    hinata.display_info();
    SEP;

    //    hinata.person_id() = 1001LLU;
    //    hinata.fist_name() = "Hinata";
    //    hinata.last_name() = "Chikao";
    //    hinata.age() = 54;

    hinata.display_info();
    SEP;

    out << "\n #(07:22:24): The End ..." << eln;
    return EXIT_SUCCESS;
}
