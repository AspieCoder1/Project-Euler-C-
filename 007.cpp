#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(long n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 3; i < n / 2; i = i + 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::vector<int> primes;
    primes.push_back(2);
    int count = 1;
    int candidate = 1;
    while (count < 10001)
    {
        if (isPrime(candidate))
        {
            primes.push_back(candidate);
            count++;
        }
        candidate = candidate + 2;
    }

    std::cout << "Size of Array: " << primes.size() << "\n";
    std::cout << "Answer: " << primes.back() << "\n";
}