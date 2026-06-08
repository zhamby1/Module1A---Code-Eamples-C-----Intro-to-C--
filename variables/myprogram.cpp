//includes a header that allows us to use input and output functions
#include <iostream>
//uses a namespace to avoid having to write std:: before every standard library function
using namespace std;

//main function where the program starts executing
int main()
{
    //declaring variables..varaibles store data
    //in C++ they have to use data types
    //data types specify what kind of data a variable can hold
    //the main data types we will be using in class are int, double, char, string, and bool

    //int is used to store whole numbers (integers)
    //before we can use a variable, we have to declare it by specifying its data type and name
    
    int my_int = 5; //all statements end with a ;
    int my_second_int = 10;

    int sum = my_int + my_second_int;

    double my_double = 10.4; //double is used to store decimal numbers (floating point numbers)
    double my_second_double = 5.6;

    double double_sum = my_double + my_second_double;

    //strings are text that we can store in variables, they are enclosed in double quotes
    string name = "Zach";

    //you can also declare a variable and then assign it later
    int my_third_number;
    int my_fourth_number;
    int my_sum;

    my_third_number = 15;
    my_fourth_number = 20;
    my_sum = my_third_number + my_fourth_number;

    //currently we cannot see our sum value because we have not printed it to the screen
    //to print something to the screen we use cout keyword
    //we will say cout << value
    cout << sum;
    //by default cout will print values on the same line, if we want to print on a new line we can use endl
    cout << endl;

    //you can allso use \n to print a new line or use endl in the same statement
    cout << sum << endl;

    //I can also use strings / concatonation to print out a message along with the sum
    cout << "The sum of these numbers are " << sum << endl;
    
    //cout doublesum
    cout << double_sum << endl;

    //string cout
    cout << name << endl;
    
    //cout my_sum
    cout << my_sum << endl;

}

