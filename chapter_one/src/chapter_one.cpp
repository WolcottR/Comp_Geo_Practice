#include <chapter_one.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <functional>
#include <algorithm>


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

void sorting(std::pair<std::vector<double>,std::vector<double>> & p)
{
    std::sort(p.first.begin(), p.first.end());

    for (auto it = p.first.begin(); it != p.first.end();)
    {
        auto a = it;
	auto b = ++it;
      
        if (a > b)
        {
	    std::iter_swap(a, b);
        }
    }
}

bool lineSegmentSort(double x1, double y1, double x2, double y2, double x3, double y3)
{
    if ( ((x3 - x1)(y2 - y1) - (y3 - y1)(x2 - x1)) < 0) return false; 
}

void chapter_one(void)
{
    auto data = reader();

    sorting(data);
}
