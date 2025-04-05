#include <iostream>
using namespace std;

int BinToDecimal(int bin) {  
    int decimal = 0;
    int base = 1;
    while (bin > 0) {
        decimal += (bin % 10) * base;
        base *= 2;
        bin /= 10;
    }

    return decimal;
}