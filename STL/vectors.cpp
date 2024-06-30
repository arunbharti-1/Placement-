#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;   //create an empty vector ie size 0 
    vector<int>v1(5); // create a vector of size 5 with all elements ===>0
    vector<int>v2(5,100);//create a vector of size 5 with all elements ===>100
    printf("%d ",v.size());
    printf("%d ",v1.size());
    printf("%d",v2.size());
    cout<<endl;
    for(int i=0;i<v1.size();i++)
       cout<<v1[i]<<" ";
    cout<<endl;
    for(int i=0;i<v2.size();i++)
       cout<<v2[i]<<" ";
    cout<<endl;
    cout<<"the size of vector is "<<v.size()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout<<"the size of vector is "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<" ";
    cout<<endl;
    for(int x:v)
       cout<<x<<"  ";
    for(auto x : v)
       cout<<x<<"  ";
    cout<<endl;
    
    vector<int>v3;
    cout<<"the size is "<<v3.size()<<endl;
    cout<<"the capacity is "<<v3.capacity()<<endl;
    v3.push_back(10);
    cout<<"the size is "<<v3.size()<<endl;
    cout<<"the capacity is "<<v3.capacity()<<endl;
    v3.push_back(20);
    cout<<"the size is "<<v3.size()<<endl;
    cout<<"the capacity is "<<v3.capacity()<<endl;
    v3.push_back(30);
    cout<<"the size is "<<v3.size()<<endl;
    cout<<"the capacity is "<<v3.capacity()<<endl;
    v3.push_back(40);
    cout<<"the size is "<<v3.size()<<endl;
    cout<<"the capacity is "<<v3.capacity()<<endl;
    v3.push_back(30);
    cout<<"the size is "<<v3.size()<<endl;
    cout<<"the capacity is "<<v3.capacity()<<endl;
    
    return 0;
}









//New code

// #include <iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>t){
//     for(int i=0;i<t.size();i++)
//        cout<<t[i]<<"  ";
//     t.pop_back();   // copy pe kaam ,original wale ke content change ni honge
//     cout<<endl;
//     }
    
// int main()
// {
//     vector<int>v;   //create an empty vector ie size 0 
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//      {
//          int x;
//          cin>>x;
//          v.push_back(x);
//      }
//      display(v);
//      vector<int>&v2=v;  //refrence  
//      display(v2);
//      v2.pop_back(); 
//      display(v);
//     return 0;
// }