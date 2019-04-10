#include<iostream>
#include<fstream>
using namespace std;
/*int main(){
	char ch;
        ifstream in;
	in.open("ft.txt",ios::in);
	while(!in.eof())
	{
		ch=in.get();
		cout<<ch;
	}
	in.close();
	return 0;
}*/
int main(){
	ofstream out;
	out.open("ft.txt",ios::out);
	out<<"Hi....! i m soham";
	out.close();
	return 0;
}
