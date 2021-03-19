#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
const ll N=4e5+2,inf=1e9+7;
class Addition
{
public:
    int _add(int a,int b) // function overloading
    {
        return a+b;
    }
    int _add(int a,int b,int c) // function overloading
    {
        return a+b+c;
    }
};

class Count
{
private:
    int cnt;
public:
    Count():cnt(10){}

//    void operator++(){ // overload when used as prefix
//        ++cnt;
//    }
//    void operator++(int){ // overload when used as postfix
//        cnt++;
//    }
    Count operator++(){
        Count tmp;
        tmp.cnt=++cnt;
        return tmp;
    }
    void _display()
    {
        cout<<cnt<<"\n";
    }
};

class Complex
{
private:
    double real,imag;
public:
    Complex():real(0),imag(0){}
    Complex(int a,int b):real(a),imag(b){}
    Complex operator+(const Complex &obj) // binary operator overloading
    {
        Complex rt;
        rt.real=real+obj.real;
        rt.imag=imag+obj.imag;
        return rt;
    }
    void _display()
    {
        cout<<real<<" "<<imag<<"\n";
    }
};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //ofstream outfile("output.txt");
    //cout<<setprecision(4)<<fixed;

    int tc=1,t=0;//cin>>tc;
    while(tc--){
        // function overloading
        Addition add;
        cout<<add._add(4,5)<<"\n";
        cout<<add._add(4,5,10)<<"\n";

        // operator overloading (unary and binary)
        Count cnt;
//        ++cnt; // Call the "void operator ++ ()" function
//        cnt++; // Call the "void operator ++ (int)" function

        Count rt=++cnt; // call the "Count operator++ ()"
        rt._display();

        Complex A(4,7),B(5,9);
        Complex C=A+B;
        C._display();
    }


    return 0;
}

