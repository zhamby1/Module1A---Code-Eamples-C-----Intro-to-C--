//includes a header that allows us to use input and output functions
#include <iostream>
//uses a namespace to avoid having to write std:: before every standard library function
using namespace std;

//main function where the program starts executing
int main()
{
    //arithmetic operators are the following in c++: +, -, *, /, and %

    int a = 10;
    int b = 5;
    //addition
    int sum = a + b;

    //subtraction
    int c = 5;
    int d = 2;
    int difference = c - d;

    //multiplication
    int e = 4;
    int f = 5;
    int product = e * f;

    //division
    int g = 20;
    int h = 4;
    int quotient = g / h;

    //if your division results in a decimal number, it will be truncated to an integer if you are using int data type so you need to store it in a double...however we will still lose some data

    //we can convert the integers to doubles before we divide them to get a more accurate result
    int i = 7;
    int j = 2;
    //this often should be necesasary because you should be asking for the right or using the right data type to begin with
    double quotient2 = double(i) / double(j);

    //solution 2 is make i and j doubles
    double k = 7;
    double l = 2;
    double quotient3 = k / l; 

    //modulo operator % gives us the remainder of a division operation
    int m = 10;
    int n = 3;
    int remainder = m % n;

    cout << sum << endl;
    cout << difference << endl;
    cout << product << endl;
    cout << quotient << endl;
    cout << quotient2 << endl;
    cout << quotient3 << endl;
    cout << remainder << endl;

}

