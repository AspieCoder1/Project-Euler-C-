#include <iostream>
/*
    Convert both sets to arithmetic progressions instead of using for loop
*/

double divisibleby(int n, int target)
{
    int p = target / n;
    return (n * (p + 1) * p) / 2;
}

int main()
{
    std::cout << "Answer: " << divisibleby(3, 999) + divisibleby(5, 999) - divisibleby(15, 999) << "\n";
}