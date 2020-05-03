#include <iostream>
#include <vector>

int reverse(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = 10 * reversed + (n % 10);
        n = n / 10;
    }
    return reversed;
}

bool isPalindrome(int n)
{
    return n == reverse(n);
}

int main()
{
    int largestPalindrome = 0;
    int i = 100;
    int j;
    while (i <= 999)
    {
        j = i;
        while (j <= 999)
        {
            if (isPalindrome(i * j) && i * j > largestPalindrome)
            {
                largestPalindrome = i * j;
            }
            j++;
        }
        i++;
    }

    std::cout << largestPalindrome << "\n";
}