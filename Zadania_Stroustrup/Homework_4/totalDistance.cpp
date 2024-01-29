#include <iostream>
#include <vector>
#include <algorithm>

double totalDistance(const std::vector<double>& distCity){
    double totalDist {};

    for(auto element: distCity){
        totalDist += element;
    }
    return totalDist;
}