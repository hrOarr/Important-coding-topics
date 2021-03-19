/*
A full Binary tree is a special type of binary tree in which every
parent node/internal node has either two or no children.
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
bool _fullBinaryTree(Node *root)
{
    if(root==NULL)return true;
    if(root->lft==NULL&&root->rgt==NULL)return true;
    if(root->lft&&root->rgt){
        return _fullBinaryTree(root->lft)&&_fullBinaryTree(root->rgt);
    }
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
        root->rgt=new Node(3);
        root->lft->lft=new Node(4);
        root->lft->rgt=new Node(5);
        root->rgt->lft=new Node(6);
        root->rgt->rgt=new Node(7);

        if(_fullBinaryTree(root)){
            cout<<"Full Binary tree\n";
        }
        else{
            cout<<"Not full binary tree\n";
        }
    }


    return 0;
}
