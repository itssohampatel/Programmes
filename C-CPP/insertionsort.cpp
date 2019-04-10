include <iostream>

using namespace std;
void sort(int a[],int n){
    for(int i=0;i<n;i++){
        int temp=a[i];
        int j=i;
        while(j>0 && temp<a[j-1]){
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=temp;
    }
    
}
int main(){
    int num;
    cin>>num;
    int array[num];
    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    sort(array,num);
    for(int i=0;i<num;i++){
        cout<<array[i];
    }
    return 0;
}


