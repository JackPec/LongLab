#include <iostream>
#include "long.h"

using namespace std;

int main(void)
{
    longEnchanced j(1234);
    longEnchanced k(1234);
    longEnchanced g;
    //longEnchanced k;

    long p = k + j + 100 - 5;
    g = k + j;

    cout << "Read in a long enchanced Object: ";
    cin >> k;
    cout << k << "\n";

    cout << k[10] << "\n";
    cout << k[1000] << "\n";
    cout << k[10000] << "\n";

    cout << k(10,1000) << "\n";
    cout << k(1000,10) << "\n";
    cout << k(1,10000) << "\n";
    cout << k(1,1) << "\n";
    cout << k(1,100) << "\n";
    cout << k(10,100) << "\n";
    cout << k(10000,10000) << "\n";


    cout << "\nlong p = k + j + 100 - 5 = " << p << "\n";

    cout << "\nj:" << j << "\n";

    cout << j[10] << "\n";
    cout << j[1000] << "\n";
    cout << j[10000] << "\n";

    cout << j(10,1000) << "\n";
    cout << j(1000,10) << "\n";
    cout << j(1,10000) << "\n";
    cout << j(1,1) << "\n";
    cout << j(1,100) << "\n";
    cout << j(10,100) << "\n";
    cout << j(10000,10000) << "\n";


    cout << "\ng:" << g << "\n";

    cout << g[10] << "\n";
    cout << g[1000] << "\n";
    cout << g[10000] << "\n";

    cout << g(10,1000) << "\n";
    cout << g(1000,10) << "\n";
    cout << g(1,10000) << "\n";
    cout << g(1,1) << "\n";
    cout << g(1,100) << "\n";
    cout << g(10,100) << "\n";
    cout << g(10000,10000) << "\n";


    return 0;
}















