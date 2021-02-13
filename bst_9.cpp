void inorder(Node*root,vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
     
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    
}
void find(Node*root, vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
    
        find(root->left,v);
        root->data=v.back();
        v.pop_back();
        find(root->right,v);
    
}


Node *binaryTreeToBST (Node *root)
{
    vector<int>v;
    inorder(root,v);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    find(root,v);
    return root;
}

