# include <stdio.h>
void merge(int arr[],int l,int m,int r){
    int i = l;
    int j = m+1;
    int k = 0;
    int temp[r-l+1];
    while( i <= m && j <= r){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++; k++;
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while (i <= m) {
        temp[k++] = arr[i++];
    }
    while (j <= r) {
        temp[k++] = arr[j++];
    }
    for (i = l, k = 0; i <= r; i++, k++) {
        arr[i] = temp[k];
    }
}

void merge_sort(int arr[], int l, int r){
    if(l < r){
        int m = (l+r)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int i,n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the Value : ");
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}