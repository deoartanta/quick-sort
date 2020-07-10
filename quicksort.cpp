#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int partition(int a[],int l,int u){
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;

    do{
        do{
        	i++;
		}while(a[i]<v&&i<=u);
        
        do{
        	j--;
		}while(v<a[j]);
        
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }while(i<j);
    a[l]=a[j];
    a[j]=v;
    return(j);
}

void quick_sort(int a[],int l,int u){
    int j;
    if(l<u){
        j=partition(a,l,u);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,u);
    }
}


int main(){
	
	int n,i;
    n =7;
    int a[]={9,4,2,7,10,1,5};
    cout<<"\nQUICK SORT"<<endl;
    cout<<"\nData sebelum pengurutan : ";
    
    for(i=0;i<n;i++){
    	cout<<setw(3)<<a[i];
	}
    cout<<endl;            
    quick_sort(a,0,n-1);
    
	cout<<"\nData setelah dilakukan quick sort : ";
    for(i=0;i<n;i++){
    	cout<<setw(3)<<a[i];
	} 
	
	return 0;
}
