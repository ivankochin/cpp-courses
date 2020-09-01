// since C++14

auto void_func0() {}                  // returns void
auto void_func1() { return func0(); } // returns void

int x = 1;
auto func0() { return  x; } // return  int

// auto* void_func1() {} // compile-time error
auto* func1() { return &x; } // returns int*

template<class T, class U>
auto add(T t, U u) { return t + u; } // the return type is the type of operator+(T, U)

// compile-time error
// auto return_bool_or_float(bool val) {
//     if (val) return val;
//     else return 3.14f;
// }

// compile-time error
// struct my_struct0 {
//     virtual auto f() { return 2; }
// };
