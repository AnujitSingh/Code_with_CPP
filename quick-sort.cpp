#include<iostream>

using namespace std;

int partition(int a[], int l, int h){
    int pivot, i, j, temp;
    pivot = a[h];
    i = l-1;
    for(j=l; j<h; j++){
        if(a[j] <= pivot){
            i = i+1;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i+1];
    a[i+1] = a[h];
    a[h] = temp;
    return i+1;
}

void quicksort(int a[], int l, int h){
    if(l<h){
        int q;
        q = partition(a, l, h);
        quicksort(a, l, q-1);
        quicksort(a, q+1, h);
    }
}


int main(){
    int i, n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(i=0; i<n; i++)
        cin>>a[i];
    quicksort(a, 0, n-1);
    cout<<"The sorted array is: ";
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;
}