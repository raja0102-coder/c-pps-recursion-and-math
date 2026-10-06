#include <stdio.h>

// 1. Recursive Factorial Engine
long long factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive step
}

// 2. Recursive Fibonacci
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 3. Recursive Greatest Common Divisor (Euclidean Algorithm)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// 4. Recursive Exponentiation (Base^Exp)
long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

// 5. Tower of Hanoi Solver
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("    Move disk 1 from rod %c -> rod %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    printf("    Move disk %d from rod %c -> rod %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    printf("==================================================\n");
    printf("     PPS RECURSION & MATHEMATICAL ENGINE          \n");
    printf("==================================================\n\n");

    // Factorial Execution
    int factNum = 6;
    printf("[1] FACTORIAL COMPUTATION:\n");
    printf("    %d! = %lld\n\n", factNum, factorial(factNum));

    // Fibonacci Series Execution
    int fibTerms = 8;
    printf("[2] FIBONACCI SERIES (First %d terms):\n", fibTerms);
    printf("    Sequence: ");
    for (int i = 0; i < fibTerms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n\n");

    // Euclidean GCD Execution
    int num1 = 48, num2 = 18;
    printf("[3] EUCLIDEAN GREATEST COMMON DIVISOR (GCD):\n");
    printf("    GCD of %d and %d = %d\n\n", num1, num2, gcd(num1, num2));

    // Exponentiation Execution
    int base = 2, exp = 10;
    printf("[4] RECURSIVE EXPONENTIATION:\n");
    printf("    %d^%d = %lld\n\n", base, exp, power(base, exp));

    // Tower of Hanoi Execution
    int disks = 3;
    printf("[5] TOWER OF HANOI SOLVER (%d Disks):\n", disks);
    towerOfHanoi(disks, 'A', 'C', 'B');

    printf("\n==================================================\n");

    return 0;
}
