#include <iostream>
#include <array>

void BubbleSort(int a[], int size){
    for(int i=size-1;i>0;i++){
        for(int j=0;j<i;i++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }

    }
}

int main(){

int arr[4]={1,2,3,4};
int size=sizeof(arr)/sizeof(arr[0]);
BubbleSort(arr, size);

for(int i: arr){
    std::cout << i << std::endl;
}
    return 0;
}