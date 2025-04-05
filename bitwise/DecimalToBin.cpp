#include <iostream>
using namespace std;

int DecimalToBin(int decimal) {
    int bin = 0;
    int base = 1;
    while (decimal > 0) {
        bin += (decimal % 2) * base;
        base *= 10;
        decimal /= 2;
    }

    return bin;
}