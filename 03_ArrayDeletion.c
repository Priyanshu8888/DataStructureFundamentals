#include<stdio.h>
// code for deletion
void deletion(int arr[], int index, int used ){
    for(int i = index; i < used-1; i++){
        arr[i] = arr[i+1];
    }
}

void display(int arr[], int used){
    for(int i = 0; i < used; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void setvalue(int arr[], int used){
    for(int i = 0; i < used; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
}

int main(){
    int total, used, index;
    printf("Enter the total length of the the array you want: ");
    scanf("%d", &total);

    int arr[total];

    printf("Enter the length of the the array you want: ");
    scanf("%d", &used);

    if(used > total){
        return -1;
    }

    printf("Enter the index you want to delete: ");
    scanf("%d", &index);

    setvalue(arr, used);

    display(arr, used);

    deletion(arr, index, used);
    used--;

    display(arr, used);

    return 0;
}