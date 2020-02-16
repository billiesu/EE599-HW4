#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    vector<int> input1 = {0, 2, 1, 5 ,6, 3};
    vector<int> input2 = {-2, 3, -1, 5, 6, 10};
    std::cout << solution.KthLargest(input2, 3) << std::endl;

    return EXIT_SUCCESS;
}