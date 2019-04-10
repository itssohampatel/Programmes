#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
struct information{
	unsigned int id;
	string first_name,last_name;
	bool assign;
}flight[6][2];
void reserve(int seat){
	int row=(seat-1)/2;
	int col=(seat-1)%2;
	flight[row][col].assign=true;
	cout<<"enter first name:";
	cin>>flight[row][col].first_name;
	cout<<"enter last name:";
	cin>>flight[row][col].last_name;
}
void no_reserve(int row,int col){
	flight[row][col].assign=false;
	flight[row][col].id=row*2+1+col;
}
void print_reservation(int r,int c){
	cout<<"id = "<<flight[r][c].id<<endl;
	cout<<"reserved = "<<(flight[r][c].assign?"yes":"no")<<endl;
	if(flight[r][c].assign){
		cout<<"name = "<<flight[r][c].first_name+" "+flight[r][c].last_name<<endl;
	}
}
void empty_seats(){
	int num=0;
	for(int i=0;i<6;i++)
		for(int j=0;j<2;j++)
			if(!flight[i][j].assign){
				cout<<endl<<"seat no."<<flight[i][j].id;
				num++;
			}
	cout<<endl<<"total empty seats:"<<num<<endl;
}
void reserved_seats(){
	int num=0;
	for(int i=0;i<6;i++)
		for(int j=0;j<2;j++)
			if(flight[i][j].assign){
				cout<<endl<<"id = "<<flight[i][j].id;
				cout<<endl<<"name = "<<flight[i][j].first_name+" "+flight[i][j].last_name;
				num++;
			}
	cout<<endl<<"total reserved seats:"<<num<<endl;
}
void delete_all(){
	for(int i=0;i<6;i++)
		for(int j=0;j<2;j++){
			no_reserve(i,j);
		}
}
int main(){
	int x;
	delete_all();
	//clrscr();
	while(true){
		cout<<"a.   Display ALL seat assignments (including Empty). \n";
		cout<<"b.   Show ONLY a list of empty seats and show total of empty seats. \n";
		cout<<"c.   SHOW ONLY the assigned seats with name of person and total assigned \n";
		cout<<"d.   Asiign the customer to an empty seat. \n";
		cout<<"e.   Delete ONE seat assignment. \n";
		cout<<"f.   Delete ALL seat assignments.\n";
		cout<<"g.   quit program.\n";
		cout<<"enter your choice:";
		switch(getche()){
			case 'a':
			case 'A':
					cout<<endl;
					for(int i=0;i<6;i++)
					for(int j=0;j<2;j++){
						print_reservation(i,j);
					}
					break;
			case 'b':
			case 'B':
					empty_seats();
					break;
			case 'c':
			case 'C':
					reserved_seats();
					break;
			case 'd':
			case 'D':
					cout<<endl<<"enter seat number:";
					cin>>x;
					if(x<1||x>12)
						cout<<"invalid seat number!"<<endl;
					else
						reserve(x);
					fflush(stdin);
					break;
			case 'e':
			case 'E':
					cout<<endl<<"enter seat number:";
					cin>>x;
					if(x<1||x>12)
						cout<<endl<<"invalid seat number!"<<endl;
					else{
						int row=(x-1)/2;
						int col=(x-1)%2;
						flight[row][col].assign=false;
						cout<<endl<<"seat "<<x<<" deleted"<<endl;
					}
					fflush(stdin);
					break;
			case 'f':
			case 'F':
					delete_all();
					cout<<endl<<"all seats deleted"<<endl;
					break;
			case 'g':
			case 'G':exit(0);
			default:cout<<endl<<"invalid key!"<<endl;
		}
		cout<<"press any key to continue...\n";
		getch();
		clrscr();
	}
	return 0;

}
/*
row 0 1 2 3 4 5
val 1 2 3 4 5 6
	0 1 2 3 4 5
	7 8 9 10 11 12
*/
