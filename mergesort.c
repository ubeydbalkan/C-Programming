#include<stdio.h>
#include<stdlib.h>

int size;

void merge(int array[], int left, int medium, int right) {
    int i, j, k;
    int n1, n2;
    n1 = medium-left+1;
    n2 = right-medium;
    int L[n1], R[n2];
    for(i = 0; i < n1; i++) {
        L[i] = array[left+i];
    }
    for(j = 0; j < n2; j++) {
        R[j] = array[medium+1+j];
    }
    i = 0;
    j = 0;
    k = left;
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        array[k] = L[i];
        i++;
        k++;    
    }
    while(j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int array[], int left, int right) {
    if(left < right) {
        int medium = (left+right-1)/2;
        mergesort(array, left, medium);
        mergesort(array, medium+1, right);
        merge(array, left, medium, right);
    }
}
int main() {
    int i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int dizi[size];
    printf("Enter the elements of the array:\n ");
    for(i = 0; i < size; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Initial array:\n");
    for(i = 0; i < size; i++) {
        printf("%4d", dizi[i]);
    }
    printf("\n");
    mergesort(dizi, 0, size-1);
    printf("Sorted array:\n");
    for(i = 0; i < size; i++) {
        printf("%4d", dizi[i]);
    }   
    return 0;
}



