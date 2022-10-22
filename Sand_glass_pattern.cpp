#include<iostream>
using namespace std;

int main(){
	int n=5,i,k,j;
	
	for(i=n;i>=1;i--){  //outer loop
		
		for(k=n-1;k>=i;k--){
			cout<<" ";     //spacing
		}
			
		for(j=i;j>=1;j--){  //inner loop
			cout<<"* ";
		}
		cout<<endl;
	
	}
	
	for(i=1;i<=5;i++){  //outer loop
		
		for(k=i;k<n;k++){
			cout<<" ";     //spacing
		}
			
		for(j=1;j<=i;j++){  //inner loop
			cout<<"* ";
		}
		cout<<endl;
	
	}
	
	return 0;
} 
