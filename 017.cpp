#include <string>
#include <iostream>
#include <cmath>

int main()
{
    std::string units[20] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    std::string hundred = "hundred";
    std::string thousand = "thousand";
    std::string andWord = "and";

    int total = 12;
    int wordSum = 0;
    int temp;
    for (int i = 1; i <= 1000; i++)
    {
        if ((0 <= i) && (i < 20))
        {
            total += units[i].length();
            std::cout << units[i] << std::endl;
        }
        else if ((20 <= i) && (i < 100))
        {
            total += (tens[i / 10].length() + (i % 10 != 0 ? units[i % 10] : "").length());
            std::cout << tens[i / 10] << " " << (i % 10 != 0 ? units[i % 10] : "") << "\n";
        }
        else if ((100 <= i) && (i < 1000))
        {
            if (i % 100 == 0)
            {
                total += (units[i / 100].length() + hundred.length());
                std::cout << units[i / 100] << " " << hundred << "\n";
            }
            else if ((i % 100 < 20))
            {
                total += (units[i / 100].length() + hundred.length() + andWord.length() + units[i % 100].length());
                std::cout << units[i / 100] << " " << hundred << " " << andWord << " " << units[i % 100] << "\n";
            }
            else
            {
                std::cout << units[i / 100] << " " << hundred << " " << andWord << " " << tens[(i / 10) % 10] << " " << units[i % 10] << "\n";
                total += (units[i / 100].length() + hundred.length() + andWord.length() + tens[(i / 10) % 10].length() + units[i % 10].length());
            }
        }
        else
        {
            std::cout << "One thousand";
        }
    }

    std::cout << "Total: " << total << "\n";
}