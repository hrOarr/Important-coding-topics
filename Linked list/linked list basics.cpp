/*
A linked list data structure includes a series of connected nodes.
Here, each node store the data and the address of the next node.

applications:
Dynamic memory allocation
Implemented in stack and queue
In undo functionality of softwares
Hash tables, Graphs
*/

#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
// for struct in C
struct Node
{
    int data;
    struct Node *next;
};
void _print(struct Node *head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

// for struct in C++
struct Node2
{
    int data;
    Node2 *next;
    Node2(int val){
        data=val;
        next=NULL;
    }
};
void _print2(Node2 *head)
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
        // linked list in C
        struct Node *head,*one,*two;
        head = (struct Node*)malloc(sizeof(struct Node));
        head->data=5;
        one = (struct Node*)malloc(sizeof(struct Node));
        two = (struct Node*)malloc(sizeof(struct Node));
        one->data=10;
        two->data=20;
        head->next=one;
        one->next=two;
        two->next=NULL;
        _print(head);

        // linked list in C++
        Node2 *Head,*ek,*dui;
        Head = new Node2(5);
        ek = new Node2(10);
        dui = new Node2(20);
        Head->next=ek;
        ek->next=dui;
        dui->next=NULL;
        _print2(Head);
    }


    return 0;
}
