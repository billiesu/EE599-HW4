#include <iostream>
#include "src/lib/solution.h"

int main()
{
    MaxHeap h;
    h.push(1);
    h.push(3);
    h.push(5);
    h.push(7);
    h.push(9);
    h.push(4);
    h.push(2);
    h.push(11);
    vector<int> res = h.PrintData_();
    std::cout << "parent index:" << h.GetParentIndex(5) << std::endl;
    std::cout << "left index:" << h.GetLeftIndex(0) << std::endl;
    std::cout << "right index:" << h.GetRightIndex(0) << std::endl;
    std::cout << "Largest child index:" << h.GetLargestChildIndex(0) << std::endl;
    std::cout << "left:" <<h.GetLeft(0) << std::endl;
    std::cout << "right:" <<h.GetRight(0) << std::endl;
    std::cout << "parent:" <<h.GetParent(5) << std::endl;
    std::cout << "top:" <<h.top() << std::endl;
    h.pop();
    h.PrintData_();


    

    return EXIT_SUCCESS;
}