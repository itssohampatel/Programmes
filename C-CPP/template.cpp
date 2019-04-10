#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  try{
 if(b==0)throw b;
 cout<<a/b;
}
 catch(int a)
{
  cout<<"b==0 exception"<<endl;
}
cout<<"bhund shikho kai shikho ";
  return 0;
}
