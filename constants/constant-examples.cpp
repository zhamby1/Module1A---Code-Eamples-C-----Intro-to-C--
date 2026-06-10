//includes a header that allows us to use input and output functions
#include <iostream>
//to use getline() we need to include the string library so we can use its code
#include <string>
//uses a namespace to avoid having to write std:: before every standard library function
using namespace std;

//main function where the program starts executing
int main()
{
    //constants are similar to variables in that they hold data
    //the difference is they cannot change after assignment
    //you will use the keyword const before the data type in order to make data/variable a constant

    const int x = 6;
    //you can still READ const variables and use them in calculations
    int y = 10;
    int sum = x + y;
    cout << sum;


    //there are many reasons why you would want to assign a data value but never change it
    // user error, prevent the application from accessing and changing the variable elsewhere
    // preventing magic number problems with a non-changing number

}



