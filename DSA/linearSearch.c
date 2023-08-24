#include<stdio.h>

int main(){
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int num,pos=0;
    printf("Enter the number to search: ");
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if(arr[i]==num){
            printf("Element found at index %d",i);
            pos++;
            break;
        }
        else{
        	printf("Element not found");
        	break;
        }
        
    }
    return 0;
}
