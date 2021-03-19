/*
A complete binary tree is a binary tree in which all the levels are
completely filled except possibly the lowest one, which is filled from the left.
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
int _countNode(Node *root)
{
    if(root==NULL)return 0;
    return (1+_countNode(root->lft)+_countNode(root->rgt));
}
bool _completeBinaryTree(Node *root,int nod,int node_count)
{
    if(root==NULL)return true;
    if(nod>=node_count)return false;
    bool left=_completeBinaryTree(root->lft,2*nod+1,node_count);
    bool right=_completeBinaryTree(root->rgt,2*nod+2,node_count);
    return (left&right);
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
        root->rgt=new Node(3);
        root->lft->lft=new Node(4);
        root->lft->rgt=new Node(5);
        root->rgt->lft=new Node(6);

        int node_count=_countNode(root);
        int nod=0;
        if(_completeBinaryTree(root,nod,node_count)){
            cout<<"Complete Binary tree\n";
        }
        else{
            cout<<"Not complete binary tree\n";
        }
    }


    return 0;
}
