#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    vector<int> input = {5, 9, 3, 1, 7};
    solution.Sort(input);
    solution.PrintVector(input);

    return EXIT_SUCCESS;
}