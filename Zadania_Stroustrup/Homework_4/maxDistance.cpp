#include <iostream>
#include <vector>
#include <algorithm>

double maxDistance(const std::vector<double>& distCity){
    double maxDistance {};

    auto it_min = std::max_element(distCity.begin(), distCity.end());
    maxDistance = *it_min;

    return maxDistance;
}