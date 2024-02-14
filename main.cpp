#include <iostream>
#include "math/mul.h"
#include "math/sum.h"

int main() {
    double c = sum(mul(5.2, 3.4),3.2);
    std::cout << c << std::endl;
    return 0;
}