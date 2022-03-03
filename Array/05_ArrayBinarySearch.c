#include<stdio.h>
int binarysearch(int arr[], int size, int element){
    int start = 0;
    int end = size-1;
    int mid;
    while(start<=end){
        mid = (start + end)/2;
        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid] < element){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    int element = 2; 
    int result = binarysearch(arr,size,element);
    if(result == -1){
        printf("The element is not exist in the array");
    }
    else{
        printf("The element is in %dth index", result);
    }
    return 0;
}