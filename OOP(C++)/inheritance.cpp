#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
class Shape // parent or base class
{
private:
    int length,width;
public:
    Shape():length(0), width(0){} // constructor
    Shape(int a,int b){  // constructor
        length=a;
        width=b;
    }
    int _recArea() // member function
    {
        return length*width;
    }
    friend int _recArea2(Shape S); // friend function
    void _display()
    {
        cout<<length<<" "<<width<<"\n";
    }
};
class Rectangle: public Shape // inheritance
{
public:
    Rectangle(int a,int b):Shape(a,b){} // default value pass in parent constructor
    int _area() // member function
    {
        return _recArea(); // call parent member function
    }
};
int _recArea2(Shape S) // friend function to access private data
{
    return S.length*S.width;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        Rectangle rec(4,5);
        cout<<rec._area()<<"\n";

        Shape S(6,10);
        cout<<_recArea2(S)<<"\n";;
    }


    return 0;
}
