#include<iostream>
using namespace std;
int binary(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        if (arr[mid] == x)   
            return mid; 
   
        if (arr[mid] > x)  
            return binary(arr, l, mid-1, x); 
  
        return binary(arr, mid+1, r, x); 
   } 
  
   return -1; 
} 
	
	
	
	
	




int main(){
	int i,j,n,temp,x;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	cin>>x;
	int result;
	int res=binary(a,0,n-1,x);
	if(result ==-1){
		cout<<"element is not present";
	}
	else{
		cout<<"element is present";
	}
	
	
	
}
