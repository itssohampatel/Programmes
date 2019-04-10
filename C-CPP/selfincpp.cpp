#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream in;
	char ch;
	in.open(__FILE__,ios::in);
	while(!in.eof())
		{
			ch=in.out;
			cout<<ch;
		}
	in.close();
	return 0;
}
