#include <iostream>
#include <vector>
#include <cmath>

/*
    A C++ implementation of the sieve of eratosthenes
*/
long seive(int n)
{
    std::vector<bool> numbers(n + 1, true);
    numbers[0] = numbers[1] = false;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (numbers[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                numbers[j] = false;
            }
        }
    }

    long total = 0;
    for (int p = 0; p <= n + 1; p++)
    {
        if (numbers[p])
        {
            std::cout << p << "\n";
            total += p;
        }
    }

    return total;
}

int main()
{
    std::cout << "Answer: " << seive(2000000) << "\n";
}