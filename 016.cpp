#include <iostream>
#include <vector>
#include <cmath>

typedef std::vector<int> Digits;

int main()
{
    std::vector<Digits> cache;
    std::vector<int> firstVal;
    firstVal.push_back(1);

    cache.push_back(firstVal);
    for (int i = cache.size(); i <= 1000; i++)
    {
        int carry = 0;
        std::vector<int> power = cache.back();
        for (auto &digit : power)
        {
            digit = digit * 2 + carry;
            if (digit >= 10)
            {
                digit -= 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
        }

        if (carry != 0)
        {
            power.push_back(carry);
        }
        cache.push_back(power);
    }

    int sum = 0;
    for (int i : cache[1000])
    {
        sum += i;
    }

    std::cout << "Answer: " << sum << "\n";
}