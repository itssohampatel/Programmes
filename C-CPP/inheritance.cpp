#include<iostream>
using namespace std;
class A{
public: 
int a;
A(){
a=10;}
void show(){
	cout<<a<<endl;}
};
class B1 :virtual public A{
public: 
int b1;
B1(){
b1=20;}
void show(){
	cout<<a<<" "<<b1<<endl;}
};
class B2 :virtual public A{
public:
int b2;
B2(){
b2=30;}
void show(){
	cout<<a<<" "<<b2<<endl;}
};
class C: public B1,public B2{
public: 
int c;
C(){
c=40;}
void show(){
	cout<<a<<" "<<b1<<" "<<b2<<" "<<c<<endl;}
};
int main(){
A ai;
B1 b1i;
B2 b2i;
C ci;
ai.show();
b1i.show();
b2i.show();
ci.show();

return 0;
}
