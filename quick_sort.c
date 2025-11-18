# include <stdio.h>
int arr[];

void QuickSort(int,int);
int Partition(int,int);
void InterChange(int,int);

int main(){
    int num,i;
    printf("Enter the Limit : ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        printf("Enter the elements : ");
        scanf("%d",&arr[i]);
    }

    QuickSort(0,num-1);

    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

void QuickSort(int low, int high){
    int pivot_pause;
    if(low < high){
        pivot_pause = Partition(low,high+1);
        QuickSort(low,pivot_pause);
        QuickSort(pivot_pause+1,high);
    }
}

int Partition(int low,int high){
    int pivot = arr[low];
    int start = low, end = high;
    do{
        do{
            start = start+1;
        }while(arr[start] <= pivot);
        do{
            end = end-1;
        }while(arr[end] > pivot);
        if(start < end){
            InterChange(start,end);
        }
    }while(start < end);

    arr[low] = arr[end];
    arr[end] = pivot;

    return end;
}

void InterChange(int low, int high){
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}