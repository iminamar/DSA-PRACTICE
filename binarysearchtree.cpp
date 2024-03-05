#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node*right;
    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void inorder(node* root)
{
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


node* insert(node* root , int key)
{
    node* temp;
    if(root==nullptr)
    {
        temp = new node(key);
        root = temp;
        return root;
    }
    if(root->data < key)
    {
        root->right = insert(root->right,key);
    }
    else if(root->data > key)
    {
        root->left = insert(root->left , key);
    }
    return root;
}

int main()
{
    node* root = nullptr;

    int arr[9] = {9 ,15,5,20,16,8,12,3,6};
    // int arr[9] = {5 ,5,5,5,5,5,5,5,5};   // bst contains only unique elements
    for(int i=0;i<9;i++)
    {
        root = insert(root , arr[i]);
    }
    cout<<"bst tree: ";
    inorder(root);

    return 0;
}

//-----------------



#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node*right;
    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void inorder(node* root)
{
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* createBST(int arr[], int n)
{
    node* root = nullptr;
    for(int i=0;i<n;i++)
    {
        root = insert(root , arr[i]);
    }
    return root;
}

node* insert(node* root , int key)
{
    if(root==nullptr)
    {
        return new node(key);
    }
    if(root->data < key)
    {
        root->right = insert(root->right,key);
    }
    else if(root->data > key)
    {
        root->left = insert(root->left , key);
    }
    return root;
}

int main()
{
    int arr[9] = {9 ,15,5,20,16,8,12,3,6};
    node* root = createBST(arr, 9);
    cout<<"bst tree: ";
    inorder(root);

    return 0;
}
