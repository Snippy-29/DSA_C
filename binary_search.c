# include <stdio.h>

// only the function is attested here.(non-rec way)

void Binary_Search(int search_data, int arr[],int size){
    int mid;
    int start = 0, end = size-1;
    while (start <= end)
    {
        mid = (start+end)/2;
        if(arr[mid] == search_data){
            printf("The position of the Searched data in the array is : %d",mid);
            break;
        }
        if(arr[mid] < search_data){
            start = mid + 1; // as the searched_data is in the right of mid.
        }
        if(arr[mid] > search_data){
            end = mid - 1; // as the searched_data is in the left of mid.
        }
    }
    
}