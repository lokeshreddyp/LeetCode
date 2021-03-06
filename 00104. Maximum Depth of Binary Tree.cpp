
//Accepted	44 ms	cpp
class Solution {
public:
    int maxDepth(TreeNode *root) {
        return dfs(root,0);
    }
    
    int dfs(TreeNode *node, int val)
    {
        if(!node) return val;
        return max(dfs(node->left,val+1),dfs(node->right,val+1));
    }
};
