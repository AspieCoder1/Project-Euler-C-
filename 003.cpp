#include <iostream>
#include <vector>
#include <cmath>

void primeFactors(long n)
{
    std::vector<long> primefactors;

    while (n % 2 == 0)
    {
        primefactors.push_back(long(2));
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            primefactors.push_back(long(i));
            n = n / i;
        }
    }

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