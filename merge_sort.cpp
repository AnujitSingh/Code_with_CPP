#include<bits/stdc++.h>

using namespace std;


void merge(vector<int> &arr, int l, int m, int r) {
	
	int nl = m-l+1; 
	int nr = r-m;
	vector<int> larr(nl);
	vector<int> rarr(nr);
	for(int i=0; i<nl; i++) larr[i] = arr[l+i];
	for(int j=0; j<nr; j++) rarr[j] = arr[m+1+j];
	int i=0, j=0, k=l;
	while(i < nl && j < nr) {
		if(larr[i] <= rarr[j]) {
         	arr[k] = larr[i];
         	i++;
      	}else{
         	arr[k] = rarr[j];
         	j++;
      	}
      	k++;
	}
   	while(i<nl) {       
      	arr[k] = larr[i];
      	i++; k++;
   	}
   	while(j<nr) {     
      	arr[k] = rarr[j];
      	j++; k++;
   	}
}

void mergeSort(vector<int> &arr, int l, int r) {
	int m;
	if(l < r) {
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main() {
	vector<int> arr = {-10, 9, 0, 3, 4, -7};
	mergeSort(arr, 0, 5);
	for(int i:arr) {
		cout << i << " ";
	}
	cout << endl;
}
