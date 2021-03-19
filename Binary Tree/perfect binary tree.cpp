/*

A perfect binary tree is a type of binary tree in which every internal
node has exactly two child nodes and all the leaf nodes are at the same level.

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
bool _perfectBinaryTree(Node *root,int lev,int dep)
{
    if(root==NULL)return true;
    if(root->lft==NULL&&root->rgt==NULL)return (lev+1==dep);
    if(root->lft&&root->rgt){
        return _perfectBinaryTree(root->lft,lev+1,dep)&&_perfectBinaryTree(root->rgt,lev+1,dep);
    }
    return false;
}
int _depth(Node *root)
{
    if(root==NULL)return 0;
    return 1+_depth(root->lft);
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
        root->rgt->rgt=new Node(7);

        int dep=_depth(root);
        if(_perfectBinaryTree(root,0,dep)){
            cout<<"Perfect Binary tree\n";
        }
        else{
            cout<<"Not perfect binary tree\n";
        }
    }


    return 0;
}
