#include <iostream>
#include <cmath>

long binomialCoeff(int n, int k)
{
    long C[n + 1][k + 1];
    int i, j;

    // Caculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= std::min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] +
                          C[i - 1][j];
        }
    }

    return C[n][k];
}

int main()
{
    std::cout << "Answer: " << binomialCoeff(40, 20) << "\n";
}