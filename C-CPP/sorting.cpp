#include<iostream>
using namespace std;
void bubble(int *chr,int length){
	int loops=0;
	for(int j=0;j<length-1;j++){
	int ex=0;	
	for(int i=0;i<length-1-j;i++){
		int m;
		loops++;
		
		if(chr[i]>chr[i+1])
			{
			m=chr[i];
			chr[i]=chr[i+1];
			chr[i+1]=m;
			ex++;}		
	}if(ex==0)break;
	}		
	cout<<"loop:"<<loops<<endl;
}
void selection(int *chr,int length){
	int loop=0;
	for(int j=0;j<length-1;j++){
		int min=j;
		for(int i=j+1;i<length;i++){
			loop++;		
			if(chr[min]>chr[i]){
				min=i;}
		}
		int a=chr[j];
		chr[j]=chr[min];
		chr[min]=a;
	} cout<<"loop : "<<loop<<endl;	
}

int main(){
	int length=0;
	cin>>length;
	int so[length];
	for(int i=0;i<length;i++)
		cin>>so[i];
	selection(so,5);
	for(int i=0;i<length;i++)
	cout<<so[i];
	return 0;

	
}
	
