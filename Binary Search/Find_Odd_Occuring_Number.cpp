#include<iostream>
using namespace std;

int findOddOccuring(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(s==e){
            return s;
        }

        // mid check -> even/odd
        // Mid is on ODD
        if(mid & 1){ 
            if(mid-1 >= 0 && arr[mid-1] == arr[mid]){
                // go to RIGHT
                s = mid + 1;
            }
            else{
                // go to LEFT
                e = mid - 1;
            }
        }
        else{ // Mid is on EVEN
            if(mid+1 < n && arr[mid] == arr[mid + 1]){
                // go to RIGHT
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}



int main(){
    int arr[] = {10,10,2,2,3,3,8,5,5,6,6,7,7};
    int n = 13;

    int ansIndex = findOddOccuring(arr, n);

    cout << "Final AnsIndex is: " << arr[ansIndex] << endl;
}