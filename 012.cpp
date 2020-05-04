#include <iostream>
#include <vector>
#include <cmath>
#include <map>

std::vector<long> primeFactors(long n)
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

    return primefactors;
}

std::vector<int> countDuplicutes(std::vector<long> arr)
{
    std::map<int, int> duplicates;
    for (int i = 0; i < arr.size(); ++i)
    {
        // Increment the value of with the key arr[i]
        ++duplicates[arr[i]];
    }

    std::vector<int> duplicate_factors;
    for (auto const &x : duplicates)
    {
        duplicate_factors.push_back(x.second);
    }
    return duplicate_factors;
}

int numberOfFactors(int n)
{
    std::vector<long> factors = primeFactors(n);
    std::vector<int> duplicates = countDuplicutes(factors);
    int numFactors = 1;
    for (int duplicate : duplicates)
    {
        numFactors *= (1 + duplicate);
    }
    return numFactors;
}

int main()
{
    int count = 0;
    int n = 10;
    int triangleNum;
    while (count < 500)
    {
        triangleNum = n * (n + 1) / 2;
        count = numberOfFactors(triangleNum);
        n++;
    }

    std::cout << "answer: " << triangleNum << "\n";
}
