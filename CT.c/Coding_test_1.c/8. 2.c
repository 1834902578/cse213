#include<stdio.h>
int main(){
 int *p; 
int i, n; 
int arr[100]; 
int size =0;
p = &arr[0]; 
scanf("%d",&n); 
for(i=0; i<n; i++) 
scanf("%d",(p+i)); 
printf("\n"); 
for(i=0; i<n; i++) 
printf("%d ",*(p+i));
}

for(i=0; scanf("%d",(p+i))!=EOF; i++){ 
size++; 
} 
printf("\n"); 
for(i=0; i<size; i++){ 
printf("%d ",*(p+i)); 
}

int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; int size = 10; 
p = &arr[0]; 
for(i=0; i<size; i++){
 printf("%d ", *(p+i));
 } 
return 0;
}
