#include <algorithm>
#include <vector>
#include <numeric>

std::string meanVsMedian(std::vector<int> numbers)
{		
		int size = numbers.size();
    std::sort(numbers.begin(),numbers.end());
    
    double mean = double (std::accumulate(numbers.begin(),numbers.end(),0)/size);
    double median = size % 2 == 0 ? (numbers[size/2] + numbers[size/2 - 1]) / 2.0 : numbers[size/2];
    
    if (mean > median) return "mean";
    else if (mean < median) return "median";
    else return "same";
 }
