/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 TreeNode* MakeTree(vector<int>&PreOrder,vector<int>&InOrder,int s,int e,int& index){
    if(s>e){
        return NULL;
    }
    int data=PreOrder[index];
    index++;
   TreeNode* root=new TreeNode(data);
    int k=-1;
    for (int i = s; i <= e; i++){
        if(InOrder[i]==data){
            k=i;
            break;
        }
    }
    root->left=MakeTree(PreOrder,InOrder,s,k-1,index);
    root->right=MakeTree(PreOrder,InOrder,k+1,e,index);

    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index=0;
        return MakeTree(preorder,inorder,0,inorder.size()-1, index);

    
    
    }
};