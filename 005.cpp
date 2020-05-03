#include <iostream>
#include <numeric>
#include <vector>
/*
    This solution requires on the fact that a*b = gcd(a,b)*lcm(a,b)
*/

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// lcm(a[0],...,a[n]) === lcm(a[n],lcm(a[n-1],lcm(...)))
// You are essentially saving the result of the previous two numbers and then applying that to the third
long findlcm(std::vector<int> arr)
{
    long ans = arr[0];
    for (int i = 1; i < arr.size() - 1; i++)
    {
        ans = lcm(arr[i], ans);
    }
    return ans;
}

int main()
{
    std::vector<int> numbers;
    for (int i = 1; i < 21; i++)
    {
        numbers.push_back(i);
    }

    std::cout << findlcm(numbers) << "\n";
}