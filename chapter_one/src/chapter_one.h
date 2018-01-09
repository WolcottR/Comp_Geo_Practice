#ifndef __CHAPTER_ONE__
#define __CHAPTER_ONE__

#include <utility>
#include <vector>

std::pair<std::vector<double>,std::vector<double>> reader(void);

void sorting(std::pair<std::vector<double>,std::vector<double>> & p);

bool lineSegmentSort(double a1, double a2, double b1, double b2, double c1, double c2);

void chapter_one(void);

#endif
