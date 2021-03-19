/*
Pointers provide a way to return more than one value to the functions.
Reduces the storage space and complexity of the program.
Reduces the execution time of the program.
Provides an alternate way to access array elements.
*/

#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
void swap1(int *p1,int *p2) // pass by pointer
{
    int t=*p1;
    *p1=*p2;
    *p2=t;
    // (*p2)++ (increment value by 1)
    // p2++ (points to next memory address)
}
void swap2(int &p1,int &p2) // pass by reference
{
    int t=p1;
    p1=p2;
    p2=t;
    // p2++ (increment value by 1)
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        int *p; // pointer declaration
        int x=10;
        p=&x;
        cout<<p<<"\n"; // location address
        cout<<*p<<"\n"; // gives value 10

        // update value
        x=15;
        cout<<*p<<"\n"; // changed value 15 but address still same
        // update pointer value
        *p=20;
        cout<<x<<"\n"; // changed value 20

        // pointer and array
        int arr[6]={1,2,3,4,5};
        for(int i=0;i<5;i++)cout<<(arr+i)<<" "; // show address
        cout<<"\n";
        for(int i=0;i<5;i++)cout<<*(arr+i)<<" "; // show values
        cout<<"\n";

        // pass address or pass by pointer in function
        int a=5,b=10;
        swap1(&a,&b);
        cout<<a<<" "<<b<<"\n"; // a=10, b=5
        // pass by reference
        a=5,b=10;
        swap2(a,b);
        cout<<a<<" "<<b<<"\n"; // a=10, b=5

        // pointer of pointer
        int *p1,**p2;
        int val=14;
        p1=&val; // address of val=14
        p2=&p1; // address of pointer *p1
        cout<<p1<<" "<<*p1<<"\n"; // address and value respectively
        cout<<*p2<<" "<<**p2<<"\n"; // address and value respectively
    }


    return 0;
}
