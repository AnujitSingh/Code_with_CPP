#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
 

int main() {
	vector<int> arr = {-10, -7, 0, 3, 4, 9};
	cout << binarySearch(arr, 0, 5, 0) << endl;
	
}
