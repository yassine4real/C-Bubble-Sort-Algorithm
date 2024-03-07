#include <stdio.h>
// yassine abbou , software engineering student & Code enthusiast & problem solver
void sort_array(int arr[] , int len){
     int tmp;
     for(int i = 0 ; i < len ; i++){
        for(int j = i+1 ; j < len  ; j++){
            if (arr[j] < arr[i]){
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

int main(){
    int arr[] = {4,5,-2,4,3,9,6,1,8,7};
    int len = sizeof(arr) / sizeof(arr[0]);

    sort_array(arr , len);
    int i;
    for(i = 0 ; i < len ; i++)
        printf("%d\n" , arr[i]);
return 0;
}

