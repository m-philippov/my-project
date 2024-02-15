#include <iostream>
#include "math/mul.h"
#include "math/sum.h"
#include "math/minus.h"

int main() {
    double c = minus(sum(mul(5.2, 3.4),3.2), 3);
    std::cout << c << std::endl;
    return 0;
}