#include <iostream>

using namespace std;


//recursively trace the algorithm (0 <= r_2 < r_1)
int recursiveGCD(int a, int b, int mod)
{
    if (mod <= 0)
        return b;

    a = b;
    b = mod;
    int div = a / b;
    mod = a - (b * div);
    cout << a << " = " << b << " * " << div << " + " << mod << endl;
    return recursiveGCD(a, b, mod);
}


//start the first line of process
int gcd(int a, int b)
{
    int mod;
    mod = a % b;

    cout << a << " = " << b << " * " << (a / b) << " + " << mod << endl;
    return abs(recursiveGCD(a, b, mod));
}


int main()
{
    cout << gcd(46,821);
}
