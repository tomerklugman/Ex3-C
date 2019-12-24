#include <stdio.h>
#include "isort.h"

int main(){

int numbers[LENGTH]={0};
for(int i=0;i<LENGTH;i++){
scanf("%d",numbers);
}
insertion_sort(numbers,LENGTH);

for(int i=0;i<LENGTH;i++) {
        printf("%d",*(numbers+i));
        if(i<LENGTH) {
            printf(",");
        }
    }
return 0;
}
