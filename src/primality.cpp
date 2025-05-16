#include "primality.hpp"
#include <cmath>

namespace primality {

bool is_prime(int n) {
    if (n <= 1)
        throw std::invalid_argument("n must be > 1");
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    int limit = static_cast<int>(std::sqrt(n));
    for (int d = 3; d <= limit; d += 2)
        if (n % d == 0)
            return false;
    return true;
}

}
