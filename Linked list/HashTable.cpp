/*
HashTable collision can be solved by: -
> chaining or closed-addressing: this technique is generally used when collision occurs.
> open-addressing: this contains linear probing,quadratic probing,double hashing etc.
*/

#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
int prime=13,cnt; // greater than array size to avoid collision
int hashTable[14];
int _doublehash(int key)
{
    int a=key%prime;
    if(hashTable[a]==0)return a;
    else{
        int b=prime-(key%prime); // apply double hash
        int iter=1; // iteration
        while(true){
            int cur=(a+iter*b)%prime;
            if(hashTable[cur]==-1)return cur;
            iter++;
        }
    }
}
void _search(int key)
{
    int a=key%prime,iter=0;
    int b=prime-a;
    while(hashTable[(a+iter*b)%prime]!=key){
        if(hashTable[(a+iter*b)%prime]==-1){
            cout<<"Not found\n";
            return;
        }
        iter++;
    }
    cout<<"Found\n";
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        int Arr[]={13,4,17,26,20,7,11,30};
        memset(hashTable,-1,sizeof hashTable);
        for(int i=0;i<8;i++){
            hashTable[_doublehash(Arr[i])]=Arr[i];
        }

        _search(26); // found
        _search(33); // Not found
    }


    return 0;
}
