# include <stdio.h>
int arr[];

void main(){
    int l=0,h,i;
    printf("Enter the Limit : ");
    scanf("%d",&h);
    arr[h];

    for(i = l; i < h; i++){
        printf("Enter the Value : ");
        scanf("%d",&arr[i]);
    }

    SelectionSort(l,h-1);

    for(i = l; i < h; i++){
        printf("%d ",arr[i]);
    }
}

void SelectionSort(int low, int high){
    int i,j,temp=0,min_index;
    for(i = low; i <= high; i++){
        min_index=i;
        for(j=i+1;j<=high;j++){
            if(arr[i] <= arr[min_index]){
                min_index = i;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index]=temp;
    }
}