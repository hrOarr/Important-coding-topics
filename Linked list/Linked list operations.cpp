#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
// for struct in C++
struct Node
{
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void _insertFirst(Node **head,Node **tail,int val)
{
    // Node *newNode=(Node*)malloc(sizeof(Node)); # in C
    Node *newNode=new Node(val);
    if(*head==NULL){
        (*head)=newNode;
        (*tail)=*head;
    }
    else{
        newNode->next=*head;
        (*head)=newNode;
    }
}
void _insertLast(Node **tail,int val)
{
    Node *newNode=new Node(val);
    (*tail)->next=newNode;
    (*tail)=newNode;
}
void _insertMiddle(Node *prv,int val)
{
    if(prv->next==NULL)_insertLast(&prv,val);
    else{
        Node *newNode=new Node(val);
        newNode->next=prv->next;
        prv->next=newNode;
    }
}

void _deleteNode(Node **head,Node **tail,int val)
{
    Node *tmp=*head,*prv;
    // if first node to be deleted
    if(tmp!=NULL&&tmp->data==val){
        (*head)=tmp->next;
        free(tmp);
        return;
    }
    // find index to delete
    while(tmp!=NULL&&tmp->data!=val){
        prv=tmp;
        tmp=tmp->next;
    }
    if(tmp==NULL)return; // not found
    if(tmp->next==NULL){
        (*tail)=prv;
    }
    prv->next=tmp->next;
    free(tmp);
}
void _print(Node *head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        Node *head=NULL,*tail=NULL;
        _insertFirst(&head,&tail,5); // print 5
        _insertFirst(&head,&tail,10); // print 10 5
        _insertFirst(&head,&tail,20); // print 20 10 5
        _insertLast(&tail,30); // print 20 10 5 30
        _insertMiddle(head,21); // print 20 21 10 5 30
        _print(head);

        _deleteNode(&head,&tail,10); // print 20 21 5 30
        _deleteNode(&head,&tail,20); // print 21 5 30
        _deleteNode(&head,&tail,30); // print 21 5
        _print(head);
    }


    return 0;
}
