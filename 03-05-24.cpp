/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> v;
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      if(k==0) v.push_back(root->data);
      else{
          if(root->left)Kdistance(root->left,k-1);
          if(root->right)Kdistance(root->right,k-1);
      }
      return v;
    }
};
