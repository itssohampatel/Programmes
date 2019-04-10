#include<iostream>
using namespace std;
class ab{
protected: int a,b;
 public:
	virtual void shape()=0;
};
class bc:public ab{
	void shape(){
			cin>>a>>b;
			cout<<a<<"  "<<b<<endl;

};
class ca:public ab{
	void shape(){
			cin>>a>>b;
			cout<<a<<" "<<b<<endl;
}
};
int main(){
ab *a;
bc b;
ca c;
a=&b;
a->shape();
a=&c;
a->shape();
return 0;
}
