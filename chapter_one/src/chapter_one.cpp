#include <chapter_one.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::pair<std::vector<double>,std::vector<double>> reader(void)
{
    std::ifstream inFile("../data/convex.txt");
    std::string line;
    double column_a, column_b;

    std::pair<std::vector<double>,std::vector<double>> information;

    while(std::getline(inFile, line))
    {
        if (line.at(0) == '#') continue;
	
        inFile >> column_a >> column_b;

	information.first.push_back(column_a);
	information.second.push_back(column_b);
    }

    inFile.close();
    return information;
}

void chapter_one(void)
{
    auto data = reader();
}
