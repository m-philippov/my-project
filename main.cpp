#include <iostream>
#include "math/mul.h"
#include "math/sum.h"
<<<<<<< HEAD
#include "math/minus.h"
=======
#include "meta/meta.h"
>>>>>>> meta-code

int main() {
    double c = minus(sum(mul(5.2, 3.4),3.2), 3);
    std::cout << c << std::endl;
    // Пример обращения:
    const unsigned f5 = factorial<5>::value; // 120
    // Пример обращения:
    const unsigned i = C<5, 2>::value; // 10
    return 0;
}
