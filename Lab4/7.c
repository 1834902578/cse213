/*Split an array at K th (take input k from user) index into two different array*/

#include <stdio.h>
int main(){

    int i, k,j=0;
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr1[10];
    int arr2[10];
    int size = 10;
    int size1 = 0;
    int size2 = 0;


    scanf("%d",&k);

    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
        }

    for(i=0; i<size; i++){
    
        if(i<k){
            array1[i] = array[i];
            size1++;
        }
        else{
            array2[j++] = array[i];
            size2++;
        }
    }
    for(i=0; i<size1; i++){
        printf("%d ",arr1[i]);
        }

    printf("\n");

    for(i=0; i<size2; i++){
        printf("%d ",arr2[i]);
        }

    return 0;
}
