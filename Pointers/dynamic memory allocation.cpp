/*
To allocate memory dynamically, library functions are malloc(), calloc(), realloc() and free() are used.
These functions are defined in the <stdlib.h> header file.

The malloc() function reserves a block of memory of the specified number
of bytes. It returns a pointer, but it returns NULL pointer when failed.

The malloc() function allocates memory and leaves the memory uninitialized,
whereas the calloc() function allocates memory and initializes
all bits to zero.

If the dynamically allocated memory is insufficient or more than required,
you can change the size of previously allocated memory using the realloc() function.
*/

#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        int n=5,*ptr;
        ptr=(int*)malloc(n*sizeof(int)); // allocate memory of size n with garbage initialization
        for(int i=0;i<5;i++){
            cin>>ptr[i];
        }

        free(ptr);
        for(int i=0;i<5;i++)cout<<ptr[i]<<" "; // it shows garbage

        ptr=(int*)calloc(n,n*sizeof(int)); // initialize with 0 and syntax bit different than malloc()
        cout<<ptr<<"\n";
        for(int i=0;i<5;i++)cout<<(ptr+i); // or ptr[i]
        ptr=realloc(ptr,(n+2)*sizeof(int)); // resize dynamically
        cout<<ptr<<"\n";
    }


    return 0;
}
