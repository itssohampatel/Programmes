#include<iostream>
using namespace std;
void sort(int a[],int n ){
 int max;
 for(int i=n-1;i>0;i--){
     max=i;
     for(int j=i-1;j>=0;j--){
         if(a[j]>a[max]){
             max=j;
         }
     }
    int temp=a[max];
     a[max]=a[i];
     a[i]=temp;
 }
}
int main(){
    int num=100;
    int array[num];
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    sort(array,num);
    for(int i=0;i<num;i++){
        cout<<array[i];
    }
    
}
