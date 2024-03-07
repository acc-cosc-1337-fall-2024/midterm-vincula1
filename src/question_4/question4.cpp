//
#include "question4.h"

int get_fib_number(int n) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, next = 1, sum;
    for (int i = 2; i <= n; i++) {
        sum = prev + next;
        prev = next;
        next = sum;
    }
    return next;
}

bool test_config()
{
    return true;
}