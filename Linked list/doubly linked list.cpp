#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
// for struct in C++
struct Node
{
    int data;
    Node *next;
    Node *prv;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void _printFrontOrder(Node *head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}
void _printReverseOrder(Node *tail)
{
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->prv;
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
        Node *head=NULL,*one,*two;
        head=new Node(10);
        one=new Node(15);
        two=new Node(8);

        head->next=one;
        head->prv=NULL;

        one->next=two;
        one->prv=head;

        two->next=NULL;
        two->prv=one;

        _printFrontOrder(head); // print 10 15 8
        _printReverseOrder(two); // print 8 15 10
    }


    return 0;
}
