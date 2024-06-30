#include<iostream>
#include<array>
using namespace std;
//STL-Array in c++
int main()
{
    /*
    array<int,5> a={10,20,30,40,50};
    array<int,5> b={100,200,300,400,500};
    cout<<"Array Size "<<a.size()<<endl;
    for(int x :a)
    cout<<x<<" ";
    cout<<endl;
    cout<<"Array Element At 3 Index :"<<a.at(3)<<endl;
    cout<<"Array Empty or Not :"<<a.empty()<<endl;
    cout<<"Array First Element :"<<a.front()<<endl;
    cout<<"Array Last Element :"<<a.back()<<endl;
    cout<<"Before Swap :"<<endl;


    //this is read only for(auto x :a)
    cout<<"A :";
    for(int x :a){cout<<x<<" ";}cout<<endl;
    cout<<"B :";
    for(int x :b){cout<<x<<" ";}cout<<endl;
    a.swap(b);
    cout<<"After Swap : "<<endl;
    cout<<"A : ";
    for(int x : a){cout<<" "<<x;}  cout<<endl;
    cout<<"B : ";
    for(int x : b){cout<<" "<<x;}  cout<<endl;
    array<int,5>c;
    c.fill(10);
    cout<<"C : ";
    for(int x: c){cout<<x<<" ";}cout<<endl;
    */




    //pankaj sir
    // array<int,6>a = {10,20,30,40,50,60};
    // for(int i = 0 ; i < a.max_size() ;i++)
    // cout<<a[i]<<" ";
    // cout<<endl;
    // for(int i = 0 ; i < a.max_size() ;i++)
    // {
    //     a[i] = 0;
    // }
    // cout<<endl;
    // for(int i = 0 ; i < a.max_size() ;i++)
    // cout<<a[i]<<" ";

    //array<int,5>b = {1,2,3,4,5};
    // for(auto i:b)
    // cout<<i<<" ";
    // cout<<endl;
    //only read only not updated
    // for(auto i : b){
    //     b[i] = 0;
    // }
    // cout<<endl;
    // for(auto i:b)
    // cout<<i<<" ";
    array<int,6>a = {10,20,30,40,50,60};
    array<int , 6>::iterator it;
    it = a.begin();
    cout<<*it;
    cout<<endl;
    for(;it != a.end() ;it++)
    cout<<*it<<" ";

    cout<<endl;
    for(;it != a.end() ;it++)
    {
        *it = *it+1;
    }

    cout<<endl;

    for(int x : a)
    cout<<x<<" ";





















































    return 0;

}
