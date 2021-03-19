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
Node* _insert(Node *root,int data)
{
    if(root==NULL)return new Node(data);
    if(data<root->data){
        root->lft=_insert(root->lft,data);
    }
    else{
        root->rgt=_insert(root->rgt,data);
    }
    return root;
}
Node* _delete(Node *root,int data)
{
    if(root==NULL)return root;
    if(data<root->data){
        root->lft=_delete(root->lft,data);
    }
    else if(data>root->data){
        root->rgt=_delete(root->rgt,data);
    }
    else{
        // if one child is empty
        if(root->lft==NULL){
            Node *rt=root->rgt;
            delete root;
            return rt;
        }
        if(root->rgt==NULL){
            Node *rt=root->lft;
            delete root;
            return rt;
        }

        Node* succPar=root;
        // find successor
        // successor would be always leaf node
        Node* succ=root->rgt;
        while(succ->lft!=NULL){
            succPar=succ;
            succ=succ->lft;
        }
        if(succPar==root){
            succPar->rgt=succ->rgt;
        }
        else{
            succPar->lft=succ->rgt;
        }
        root->data=succ->data;
        delete succ;
        return root;
    }
}
Node* _search(Node* root,int data)
{
    if(root==NULL)return NULL;
    if(root->data==data)return root;
    if(data<root->data)return _search(root->lft,data);
    else return _search(root->rgt,data);
}
void _inorder(Node* root)
{
    if(root==NULL)return;
    _inorder(root->lft);
    cout<<root->data<<" ";
    _inorder(root->rgt);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        Node* root=NULL;
        root=_insert(root,50);
        root=_insert(root,30);
        root=_insert(root,20);
        root=_insert(root,40);
        root=_insert(root,70);
        root=_insert(root,60);
        root=_insert(root,80);
        _inorder(root); // inorder traversal
        cout<<"\n";
        root=_delete(root,20); // delete node 20
        _inorder(root);
        cout<<"\n";
        root=_delete(root,70); // delete node 70
        _inorder(root);
        cout<<"\n";

        Node* rt=_search(root,60); // search 60
        if(rt!=NULL&&rt->data==20){
            cout<<"60 Found\n";
        }
        else{
            cout<<"Not found\n";
        }
    }


    return 0;
}
