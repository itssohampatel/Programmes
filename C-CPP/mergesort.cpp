#include<iostream>
using namespace std;

void merge(int a[],int s,int mid,int e){
	int p=(mid-s)+1;
	int q=e-mid;	
	int la[p], ra[q];
	for(int i=s;i<=e;i++){
		if(i>mid)
		ra[i-mid-1]=a[i];
		else
		la[i-s]=a[i];
	}
	int i=0,j=0,k=s;
	for(;i<p && j<q;k++){
		if(la[i]>ra[j]){
			a[k]=ra[j];
			j++;
		}
		else{
			a[k]=la[i];
			i++;
		}
	}
	while(i<p){
		a[k]=la[i];
		i++;k++;
	}
	while(j<q){
		a[k]=ra[j];
		j++;k++;
	}
}
void mergesort(int a[],int s,int e){
	if(e-s>0){
		int mid=(e+s)/2;
		mergesort(a,s,mid);
		mergesort(a,mid+1,e);
		merge(a,s,mid,e);
	}
}

int main(){
	int num;
	cin>>num;
	int a[num];
	for(int i=0;i<num;i++){
		cin>>a[i];
	}
	mergesort(a,0,num-1);
	for(int i=0;i<num;i++){
		cout<<a[i]<<",";
	}
	return 0;
	
}

