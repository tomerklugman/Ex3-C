#include "isort.h"
#include <stdio.h>



void shift_element(int* arr, int i) {
    for(int x=0;x<i;x++) {
        *(arr+i-x)=*(arr+i-x-1);
    }
}
void insertion_sort(int* arr , int len) {
    for (int i=1;i<len;i++) {
        int temp=arr[i];
        int j=i-1;
          while(temp<*(arr+j)&&j>=0) {
              *(arr+j+1)=*(arr+j);
              j--;
            }
     *(arr+j+1)=temp;
    }
}