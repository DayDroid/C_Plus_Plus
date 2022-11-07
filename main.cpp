#include <iostream> // header file that contains functions for input and output streams
#include <vector> // used by typedef
#include <cmath> // library for math

namespace namespaceLearning {
    int x = 1;
}

namespace namespaceLearningTwo {
    int x = 8;
}
typedef std::string text_t; // goes above main class. typedef used as almost like an import
typedef int number_t;
using text_t = std::string; // how to use using

int main() { // main method fairly similar to java's main() method

    /* Variables Declaration and/or assignment is similar to java's*/
    int x; // declaration of variable x | like java.
    x = 10; // assignment

    int y = 5;
    int z = 10;
    int sum = x + y;
    double d = 0.34;

    /* Booleans: java's boolean is "boolean" while c++'s is "bool" */
    bool boolean = false;
    std::string stringsInCPP = "This is how to make a string in c++"; //    std::cout --> means standard character output. ||    '<<' means output
    std::string name = "Joe"; //     instead of using std::endl, you should use "\n" to indicate new line as its better for performance wise.  endl means end line
    std::string surname = "Biden"; // std::cout << is equivalent to System.out.print() in java and statements end with semicolons like in java.
//    std::cout << name << " " << surname << "\n";


    /* Constants: similar to java's but uses 'const' instead of 'final' they do not change and are like read-only files */

    const double PI = 3.14159;  // conventional way to declare is to make it all capitals, also like in java.
    const int LENGTH = 1080;
    const int WIDTH = 1920;
    double radius = 10;
    double circumference = 2 * PI * radius; // formula for circumference of a circle pi*r^2

//    std::cout << "Circumference is: " << circumference << "\n";


    /* NameSpace: They are ways to prevent naming conflicts in large projects*/
    using namespace namespaceLearning; // kind of like important the namespace. this would print 10 because x = 10 in the main method
    using namespace std; // useful namespace. this is useful since you no longer have to use std::cout or std::string and can remove those in code
//    using std::cout; You can also use this to cut down on the sysouts

//        std::cout << x; // this would return '1' becuase it is passing the int x from the namespace called namespaceLearning.
//        std::cout << namespaceLearningTwo::x; // preset the namespace name before calling the variable. ie: namespaceLearningTwo::x
//        cout << "gay";


    /* Typedef: Keyword used to make an alias for another data type. uses 'include <vector>' and has been replaced by the 'using' keyword*/
//    typedef std::vector<std::pair<std::string, int>> pairlist_t; // ???? wat?

//    pairlist_t pairlist;


    text_t ign = "Test"; //
    number_t age = 21; // number t is being used as an int (as an alias in place of int)
//    std::cout << age << "\n";


    /*Arithmetic operators: return output of an arithmetic operation such as addition or subtraction*/

    int students = 20;
//    students+=1; // same as students + 1
    students++; // also can be used
//    std::cout << students << "\n";


    /* type conversion: similar to casitng in java (int)  */

    int vjdu = 3.14;
    int cjaiu = 7;
    double answer;

//    std::cout << (double) vjdu / cjaiu;

    /*User input: cout << (insertion)
      cin >> (extraction) similar to scanners in java*/

/*
    std::string anoon;
    int ayge;

    std::cout << "Enter your name." << "\n";
    std::cin >> name;
    std::cout << "Your name is " << name << "\n";
    std::cout << "What is your full name? " << "\n";
    std::getline(std::cin >> std::ws, name); // as is this would basically not let you add any other input. to fix this add '>> std::ws,' after cin
    std:cout << "whats your age?" << "\n";
    std::cin >> ayge;
    std::cout << "You are " << ayge << " Years old.";




*/


    /* Hypotenuse calculator */

    double lega;
    double legb;
    double c;

/*    std::cout << "Enter side a " << "\n";
    std::cin >> lega;
    lega = pow(lega, 2);
    std::cout << "Enter side b " << "\n";
    std::cin >> legb;
    legb = pow(legb, 2);
    c = sqrt(lega + legb);
    std::cout << "Hypotenuse is " <<  c << "\n";*/



    /* If statements: similar in java*/

/*    int ifstatement1 = 1;
    int ifstatement2 = 0;

        if(ifstatement1 != ifstatement2) {
            std::cout << "1 != 0";
        }*/


    /*Switch: also basically the same as switches in java*/

    int month;

/*
    std::cout << "Enter a date number from 1-12. " << "\n";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout << "The Month is January.";
            break;
        case 2:
            std::cout << "The Month is February.";
            break;
        case 3:
            std::cout << "The Month is March.";
            break;
        case 4:
            std::cout << "The Month is April.";
            break;
        case 5:
            std::cout << "The Month is May.";
            break;
        case 6:
            std::cout << "The Month is June.";
            break;
        case 7:
            std::cout << "The Month is July.";
            break;
        case 8:
            std::cout << "The Month is August.";
            break;
        case 9:
            std::cout << "The Month is September.";
            break;
        case 10:
            std::cout << "The Month is October.";
            break;
        case 11:
            std::cout << "The Month is November.";
            break;
        case 12:
            std::cout << "The Month is December.";
            break;
        default:
            std::cout << "Number is not 1-12!";
    }
*/



    /* Ternary operator ?: replacement to an if/else statement. also very goddamn similar to java's
     * condition ? expression 1 : expression2 */

    int intGrade = 25;
/*
    if (intGrade >= 60) {
        std::cout << "You passed";
    }
    else {
        std::cout << "You failed";
    }
 // exAMPLE OF WHAT NOT TO DO
*/
//    intGrade >= 60 ? std::cout << "You passed" : std::cout << "You Failed"; // EXANOKE OF WHAT TO DO


    /* Temperature Conversion Calculator*/

/*
    double temp;
    char unit;
    double result;


    std::cout << "******************** \n";
    std::cout << "Enter unit you want to convert From (F/C)\n";
    std::cin >> unit;
    if (unit == 'F') {
        std::cout << "Enter temperature \n";
        std::cin >> temp;
        std::cout << temp << "F Equates to: " << (temp - 32) * 5 / 9 << "C" << "\n";
    }
    if (unit == 'C') {
        std::cout << "Enter temperature \n";
        std::cin >> temp;
        std::cout << temp << "C Equates to: " << (temp * 9 / 5) + 32 << "F" << "\n";
        std::cout << "******************** \n";

    }
    else {
        if (!(unit == 'F' || unit == 'C')) {
            std::cout << "Unit must be either C or F! \n";
        }

*/

    /* String Methods */

/*
    std::string mtdname;
    std::cout << "Enter your name: \n";
    std::getline(std::cin, name);
    std::cout << name.append("@gmail.com"); //adding text at the end of the name
    std::cout << name.at(0); // prints out the first letter at index 0 (aka 'n')
    std::cout << name.insert(0, "niglet"); // adds 'niglet' at position 0
    std::cout << name.find('niglet');
    std::cout << name.erase(0, 3);
    if (name.empty()) {
        std::cout << "You need to input a name";
    }

*/

    /*While Loops - loops code while it is true*/
/*    int g = 6;
    int m = 9;
    std::string getname;

    while(getname.empty()) {
        std::cout << "enter your name: \n";
        std::getline(std::cin, getname);
    }
        std::cout << "Hello, " << getname;*/

    /*Do-While loop, does code first then repeat if said condition is true*/

    // theres a much better way of writing this and its using a do while loop
    /*int num1;
    std::cout << "enter positive number: ";
    std::cin >> num1;
    while (num1 < 0) {
        std::cout << "enter positive number: ";
        std::cin >> num1;
    }
    std::cout << "number is: " << num1;
*/

/* Better Way of writing it
    int num1;
    do {
        std::cout << "Enter a Number ";
        std::cin >> num1;
    } while (num1 < 0);
        std::cout << "number is: " << num1;
*/


        /*Do While loop: way of executing a block of code x number of times */
/*        int i;
        for(i = 0; i<2000; i++) {
            std::cout << i << "\n";
        }
        if(i==2000) {
            std::cout << "Niglet";
    }*/


    /* break and continue statements| Also shown in switch expressions. break = break out of a loop, continue = to skip current iteration*/

   /* for(int i = 1; i<=20; i++) {
        if(i==13) {
//            break; // breaks loop when i == 13
            continue; // skips over when i == 13
        }
        std::cout << i << '\n';

    }
*/
/*
    nested loops are loops inside of loops
*/
//   for (int i = 60; i >= 60; i--) {
//       for(int j = 1; j<=10; j++) {
//           std::cout << j << " ";
//    std::cout << "j \n";

//   }
//       std::cout << "\n"; // prints a new line every time the inner loop ends



   /*Pseudo Random */

// initialize random number generator
/*    srand(time(NULL));

    int side1 = (rand() % 6)+1; // iuf you are rolling a 6 sided die, you would use modulus (%6) | So it takes the #, divides it by 6 and outputs remainder
    int side2 = (rand() % 6)+1;
    int side3 = (rand() % 6)+1;
    int sumofsides = side1+side2+side3;

    std::cout << side1 << '\n';
    std::cout << side2 << '\n';
    std::cout << side3 << '\n';
    std::cout << sumofsides << '\n';*/


    /* Random events ie. random weather event. uses '<ctime>' header file*/

    srand(time(0));
    int randnum = rand()%


    return 0; // return value indicates success  or failure of program execution. 0 means no failure. 1 means there was an error
}
