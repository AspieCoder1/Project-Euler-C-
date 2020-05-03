#include <iostream>
#include <vector>
#include <cmath>

void primeFactors(long n)
{
    std::vector<long> primefactors;

    // Removing all the factors of two
    while (n % 2 == 0)
    {
        primefactors.push_back(long(2));
        n = n / 2;
    }

    // Checking each odd number
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // while i divides n, divide n by i
        while (n % i == 0)
        {
            primefactors.push_back(long(i));
            n = n / i;
        }
    }

    // As we have tried every number less than sqrt(n) the number must be prime
    if (n > 2)
    {
        primefactors.push_back(long(n));
    }

    std::cout << primefactors.size() << "\n";
}

int main()
{
    primeFactors(600851475143);
}