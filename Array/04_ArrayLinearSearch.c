#include<stdio.h>
void setarray(int arr[], int length){
    for(int i = 0; i < length; i++){
        printf("Enter the %d eleement ",i+1);
        scanf("%d", &arr[i]);
    }
}
// code off linear search
int linearsearch(int arr[], int length, int element){
    for(int i = 0; i< length ; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

void display(int arr[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int length, element;
    printf("Enter the length of array is ");
    scanf("%d", &length);
    int arr[length];
    printf("Enter the element you are searching ");
    scanf("%d", &element);

    setarray(arr, length);

    int result = linearsearch(arr, length, element);

    display(arr, length);

    if(result == -1){
        printf("The element is not exist in this array");
    }else{
        printf("The element is present in %dth index of array", result);
    }
    return 0;
}
