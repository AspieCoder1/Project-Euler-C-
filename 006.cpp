#include <iostream>

int sumSquares(int n)
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

int sumNaturals(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int naturalNumbers = sumNaturals(100);
    int naturalSquares = sumSquares(100);
    std::cout << "Answer: " << (naturalNumbers * naturalNumbers) - naturalSquares << "\n";
}