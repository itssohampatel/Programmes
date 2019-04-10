#include<iostream>
using namespace std;
class done{
	int a;
	int b;
	public:
		done operator + (done v){
			done be;
			be.a=a+v.a;
			be.b=b+v.b;
			return be;
			}
		friend istream& operator >> (istream& , done&); 
		friend ostream& operator << (ostream&,done&);
};
ostream& operator<<(ostream &cout,done &dn){
	cout<<dn.a<<" "<<dn.b<<endl;
	return cout;
}
istream& operator>>(istream &cin,done &dn){
	cin>>dn.a>>dn.b;
	return cin;
}

int main(){
	done d1,d2,d3;
	cin>>d1>>d2;
	d3=d1+d2;
	cout<<d3;
/*
cout<<d3;
cout<<d1;
cout<<d2;
*/
	return 0;
}
	
