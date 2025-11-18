# include <stdio.h>
int arr[];

int main(){
    int i,p=0,n;
    printf("Enter the Limit : ");
    scanf("%d",&n);
    arr[n];

    for(i = p;i<n;i++){
        printf("Enter the Value : ");
        scanf("%d",&arr[i]);
    }

    SelectionSort(p,n);

    for(i = p;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

int SelectionSort(int p, int n){
    int i,r,temp,min;
    if(p == n){
        return -1;
    }
    
    min = arr[p];
    r = p;

    for(i = p+1; i < n; i ++){
        if(arr[i] < min){
            min = arr[i];
            r = i;
        }
    }

    temp = arr[p];
    arr[p] = arr[r];
    arr[r] = temp;

    SelectionSort(p+1,n);
}