#include <stdio.h>
#include <math.h>

/**
 * is_prime - finds and prints the largest prime factor
 * @n: input
*/
int is_prime(long long n) {
    if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

long long largest_prime_factor(long long n) {
    long long max_prime = -1;

    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    if (n > 2) {
        max_prime = n;
    }

    return max_prime;
}
