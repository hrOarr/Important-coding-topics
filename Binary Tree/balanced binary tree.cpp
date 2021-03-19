/*
A balanced binary tree, also referred to as a height-balanced binary
tree, is defined as a binary tree in which the height of the left and right
subtree of any node differ by not more than 1.
*/
#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
struct Node
{
    int data;
    Node *lft,*rgt;
    Node(int val)
    {
        data=val;
        lft=NULL;
        rgt=NULL;
    }
};
bool _balancedBinaryTree(Node *root,int &height)
{
    int left=0,right=0;
    if(root==NULL)return true;
    bool l=_balancedBinaryTree(root->lft,left);
    bool r=_balancedBinaryTree(root->rgt,right);
    height=max(left,right)+1;
    if(abs(left-right)<=1)return (l&&r);
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        Node *root=new Node(1);
        root->lft=new Node(2);
        //root->rgt=new Node(3);
        root->lft->lft=new Node(4);
        root->lft->rgt=new Node(5);
        //root->rgt->lft=new Node(6);
        //root->rgt->rgt=new Node(7);
        int height=0;
        if(_balancedBinaryTree(root,height)){
            cout<<"Balanced Binary tree\n";
        }
        else{
            cout<<"Not balanced binary tree\n";
        }
    }


    return 0;
}
