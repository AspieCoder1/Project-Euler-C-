#include <iostream>
#include <vector>

int collatz(long n)
{
    int length = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        length++;
    }
    return length;
}

int main()
{
    int currentVal;
    int maxLength = 0;
    int answer = 0;
    for (int i = 2; i < 1000000; i++)
    {
        currentVal = collatz(i);
        if (currentVal > maxLength)
        {
            maxLength = currentVal;
            answer = i;
        }
    }
    std::cout << "Answer: " << answer << "\n";
}