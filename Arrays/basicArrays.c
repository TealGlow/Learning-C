// Name: Alyssa Comstock
// Date Created: 10/16/2021
// Date Updated: 11/19/2021
// Description:  Contains arrays and the methods to manipulate arrays.

#include <stdio.h>

// Prototypes
void displayArray(int * arr, int size);
int * reverseArray(int * arr, int * rvArr, int size);
int * insertIndex(int * arr, int insertIndex, int size, int newItem);


int main(){
    // array methods: 
    // - Display entire array
    // - reversing the array

    int tempArr[5] = {0,1,2,3,4};
    int newElement;
    int newIndex=0;
    
    // displaying the array:
    printf("Displaying the array:\n");
    int arrLen = sizeof(tempArr)/sizeof(tempArr[0]);
    displayArray(tempArr, arrLen);

    // reversing the array
    printf("\n\nReversing the array:\n");
    int rvArr[5];
    reverseArray(tempArr, rvArr, arrLen);
    displayArray(rvArr, arrLen);

    return 0;
}



void displayArray(int * arr, int size){
    // Function that prints the array
    int i;

    for(i=0; i<size; i++){
        printf("%i ", arr[i]);
    }

    return;
}



int * reverseArray(int * arr, int * rvArr, int size){
    // Function that reverses the integer array
    int i;
    int j=0;

    for(i=size-1; i>=0; i--){
        rvArr[j] = arr[i];
        j++;
    }

    return *rvArr;
}

