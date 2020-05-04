#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main()
{
    std::ifstream file;
    std::string number;

    file.open("008.txt");
    if (file.fail())
        return -1;

    std::ostringstream ss;
    ss << file.rdbuf();
    number = ss.str();
    long maxval = 0;
    int val;
    for (int i = 0; i + 13 <= number.length(); i++)
    {
        long val = 1;
        for (int j = 0; j <= 12; j++)
        {
            val *= (number[i + j] - '0');
        }
        maxval = std::max(maxval, val);
    }

    std::cout << "Answer: " << maxval << "\n";
}