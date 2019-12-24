#include <stdio.h>
#include "txtfind.h"

int main(){

char word[WORD]={0};
char ab;

getword(word);
scanf("%c",&ab);
if(ab=='b'){
print_similar_words(word);
}
if(ab=='a'){
print_lines(word);
}
return 0;
}
