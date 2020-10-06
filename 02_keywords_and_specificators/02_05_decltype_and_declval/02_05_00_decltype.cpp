// decltype keyword behavior
// difference between decltype() and decltype(())
// non evaluation context in decltype. Mention sizeof().

// since C++11
#include <iostream>

struct A { double x; };

A* a;
decltype(a->x) d; // double
decltype((a->x)) d2 = d ; // double&

template<typename T>
T to_integral(T t)  { return t; }

int to_integral(float f) {
    std::cout << f << std::endl;
    return static_cast<int>(f);
}
int to_integral(double d) {
    std::cout << d << std::endl;
    return static_cast<int>(d);
}

int main() {
    decltype(to_integral(3.)) result = to_integral(3.); // int

    decltype(to_integral<int>)* int_convertion_ptr = &to_integral<int>;
    std::cout << int_convertion_ptr(3) << std::endl;
}
