# include <stdio.h>

// only the function is attested here. (recursive method)

int Binary_Search(int start, int end, int search_data, int arr[]){ // end should be sent by size-1 from the main
    int mid;
    if(start <= end){
        mid = (start + end)/2;
        if(arr[mid] == search_data){
            printf("The position of the Searched data in the array is : %d",mid);
            return;
        }
        if(arr[mid] < search_data){
            return Binary_Search(mid+1,end,search_data,arr);
        }
        if(arr[mid] > search_data){
            return Binary_Search(start,mid-1,search_data,arr);
        }
    }
}