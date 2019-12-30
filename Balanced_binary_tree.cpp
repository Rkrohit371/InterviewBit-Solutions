int height(TreeNode* root) {
    if (root == NULL) return 0;

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    int curHt = max(leftHt, rightHt) + 1;
    return curHt;
}
bool isHeightBalanced(TreeNode* root) {
    if (!root) {
        return true;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    if (abs(leftHt - rightHt) > 1) 
            return false;
    return isHeightBalanced(root->left) && isHeightBalanced(root->right);
}
int Solution::isBalanced(TreeNode* A) {
    TreeNode* root=A;
    if (isHeightBalanced(root)) {
        return 1;
    }
    else {
        return 0;
    }

    
}