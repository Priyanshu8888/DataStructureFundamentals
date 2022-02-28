#include<stdio.h>
#include<stdlib.h>

struct myarray{
    int total_size;
    int used_size;
    int *ptr;
};

void creatarray(struct myarray *array, int totalsize, int usedsize){

    (*array).total_size = totalsize;
    (*array).used_size = usedsize;
    (*array).ptr = (int *) malloc (totalsize * sizeof(int));
}

void setvalue(struct myarray *a){
    int n;
    for(int i = 0 ; i < (*a).used_size; i++){
        printf("Enter the element %d is ", i);
        scanf("%d", &(*a).ptr[i]);
        // (*a).ptr[i] = n;
    }
}

void display(struct myarray * display){
    for(int i = 0; i < (*display).used_size; i++){
        printf("%d\n", (*display).ptr[i]);
    }
}

int main(){

    struct myarray arr;
    printf("Enter the totsl size of array:");
    scanf("%d", &arr.total_size);

    printf("Enter the used size of array: ");
    scanf("%d", &arr.used_size);

    creatarray(&arr, arr.total_size, arr.used_size);

    setvalue(&arr);

    display(&arr);
    
    return 0;
}