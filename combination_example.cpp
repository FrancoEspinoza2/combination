#include <iostream>
#include <cstdint>
using namespace std;

/*
 * Factorial function: computes x!
 */
uint16_t factorial(const uint16_t x) {
    uint16_t result = 1;
    for(uint16_t i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    // Handle invalid input (single if-statement as per requirements)
    if(n <= 0 || k <= 0 || k > n) {
        cout << "Error: n and k must be greater than 0, and k <= n." << endl;
        return 1;
    }

    // Calculate factorials
    uint16_t n_fact = factorial(n);
    uint16_t k_fact = factorial(k);
    uint16_t n_minus_k_fact = factorial(n - k);

    // Calculate C(n, k) = n! / (k! * (n-k)!)
    uint16_t c_n_k = n_fact / (k_fact * n_minus_k_fact);

    cout << "C(" << n << ", " << k << ") = " << c_n_k << endl;

    return 0;
}