#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
};

void FindDupInSortedArrayUsingHashing(struct Array arr){
    int min=arr.A[0];
    int max=arr.A[arr.size-1];
    int *tempArr =new int[max+1]();//zero initialized

    for(int i=0;i<arr.size;i++){
        tempArr[arr.A[i]]++;
    }
    for(int i=min;i<max+1;i++){
        if(tempArr[i]>1)
            cout<<"Element "<< i <<" has "<< tempArr[i] <<" duplicates\n ";
    }
    delete []tempArr;
}
int main(){
    struct Array arr={{3,5,7,7,7,7,9,15,18,18},10};
    FindDupInSortedArrayUsingHashing(arr);
    return 0;
}
