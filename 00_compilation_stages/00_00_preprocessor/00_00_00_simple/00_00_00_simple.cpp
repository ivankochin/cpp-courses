// Show work of preprocessor(use -E)
// What is removed after preprocessing?
// What does remain after preprocessing?

#define MY_SIZE 10
#define ONE 1
int main() {
    for (int i = 0; i < MY_SIZE; ++i) {
#if defined(ONE)
// Hello
        char my_char = 'A';
#else
        char my_char = 'B';
#endif
    }
    return 0;
}
