#include <iostream>
#include <vector>
#include <algorithm>

double averageDistance(const std::vector<double>& distCity){
    double averageDistance {};
    double totalDist {};
    for(auto element: distCity){
        totalDist += element;
    }

    averageDistance = totalDist / std::size(distCity);

    return averageDistance;
}