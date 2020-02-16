#include <iostream>
#include "src/lib/solution.h"

int main()
{   
    vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
    // , 13, 20, 2, 14, 19, 11
    BST tree(init);
    bool res = tree.find(4);
    cout << "res is:" << res << endl;

    tree.push(6);
    vector<int> result = tree.PreOrderTraverse();
    tree.PrintVector(result);

    tree.erase(7);

    vector<int> result1 = tree.levelTraversal();
    tree.PrintVector(result1);


    return EXIT_SUCCESS;
}