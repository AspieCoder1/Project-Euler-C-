#include <iostream>

int main()
{
    int c;
    for (int a = 1; a <= 1000; a++)
    {
        for (int b = a + 1; b <= 1000; b++)
        {
            c = 1000 - b - a;
            if (a * a + b * b == c * c)
            {
                std::cout << "answer: " << a * b * c << "\n";
            }
        }
    }
}