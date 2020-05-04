#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream file;
    std::string line;

    long total = 0;

    file.open("013.txt");
    if (file.fail())
        return -1;

    while (std::getline(file, line))
    {
        total += std::stol(line.substr(0, 12));
    }
    std::cout << std::to_string(total).substr(0, 10) << "\n";
}