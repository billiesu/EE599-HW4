#include <iostream>
#include "src/lib/solution.h"

int main()
{
        Solution solution ;
        vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8};
        vector<int> res1 = solution.Filter(input);
        vector<int> res2 = solution.Map(input);
        int sum = solution.Reduce(input);
        solution.PrintVector(res1);
        solution.PrintVector(res2);
        cout << sum << endl;

    return EXIT_SUCCESS;
}