#include <iostream>
#include <vector>
#include <algorithm>

double minDistance(const std::vector<double>& distCity){
    double minDistance {};

    auto it_min = std::min_element(distCity.begin(), distCity.end());
    minDistance = *it_min;

    return minDistance;
}