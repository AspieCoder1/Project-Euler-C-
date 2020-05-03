#include <iostream>
#include <vector>

int main()
{
    std::vector<int> fib_nums(2, 1);

    int i = 2;
    int current_val = 0;

    while (current_val < 4000000)
    {
        current_val = fib_nums[i - 1] + fib_nums[i - 2];
        if (current_val >= 4000000)
        {
            break;
        }
        fib_nums.push_back(current_val);
        i++;
    }

    int total;

    for (int i = 2; i < fib_nums.size(); i++)
    {
        if (fib_nums[i] % 2 == 0)
        {
            total += fib_nums[i];
        }
    }
    std::cout << "Answer: " << total << "\n";

    return 0;
}