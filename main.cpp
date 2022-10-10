#include <iostream> // header file that contains functions for input and output streams

int main() { // main method fairly similar to java's main() method
    std::cout << "String here" << "\n"; // statements end with semicolons like in java.
//    std::cout << "Another string here"; // std::cout << is equivalent to System.out.print() in java.
    std::cout << "Another string here" << std::endl; // endl means end line
    // std::cout --> means standard character output.
    // << means output
    // instead of using std::endl, you should use "\n" to indicate new line as its better for performance wise.
    return 0; // return value indicates success  or failure of program execution. 0 means no failure. 1 means there was an error
}
