#include <iostream>
using namespace std;

typedef int dataType;

struct TreeList {
    static const int TREE_SIZE = 1024;
    int last_index;
    dataType treeData[TREE_SIZE];
};

struct TreeNode {
    dataType data;
    TreeNode* l, * r;
};
TreeNode* root = NULL;

int main() {
    return 0;
}
