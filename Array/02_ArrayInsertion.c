#include<stdio.h>
// code for Traversal
void setarray(int arr[], int n, int m){
    for(int i = 0 ; i < m; i++){
        printf("Enter thr %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int m){
    for(int i = 0 ; i < m; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// code for Insertion
int insertion(int arr[],int total, int use, int element, int index){

    for(int i = use-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){

    int total, use, element, index;
    printf("Enter the length of array you want: ");
    scanf("%d", &total);
    int arr[total];

    printf("Enter the length of array you want to use: ");
    scanf("%d", &use);

    if(use >= total){
        printf("\nInsertion not initiated\n");
        return -1;
    }

    printf("Enter the index you want to insert element: ");
    scanf("%d", &index);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    setarray(arr, total, use);

    display(arr, use);

    int result = insertion(arr, total, use, element, index);
    use++;

    if(result == -1){
        printf("\nInsertion incompete");
    }
    else{
        printf("\nInsertion complete and now your array is\n");
        display(arr, use);
    }

    return 0;
}