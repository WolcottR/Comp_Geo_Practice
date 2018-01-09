#include <chapter_one.h>
#include <streams>

std::pair<std::vector<double>,std::vector<double>> reader(void)
{
    ifstream inFile("../data/convex.txt");
    std::string line;
    double column_a, column_b;

    std::pair<std::vector<double>,std::vector<double>> information;

    while(std::getline(InFile, line))
    {
        if (line[0] == "#") continue;
	
        inFile >> column_a >> column_b;

	information->first.push_back(column_a);
	information->second.push_back(column_b);
    }

    inFile.close();
    return information;
}

void chapter_one(void)
{
    auto data = reader();
}
