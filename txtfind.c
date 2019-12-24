#include <stdio.h>
#include <string.h>
#include "txtfind.h"

int Getline(char s[]){
   int count=0;
    char text;
    scanf(" %c",&text);
    while (text!='\n'&&text!=EOF){
    *(s+count)=text;
count++;
scanf(" %c",&text);

    }
    *(s+count)='\0';
    if(text==EOF){
        return EOF;
    }
   return count; 
}
int getword(char w[]){
   int count=0;
   char text;
   scanf(" %c",&text);
while(text!='\n'&&text!='\t'&&text!=' '&&text!=EOF){
   *(w+count)=text;
    scanf(" %c",&text);
    count++;   
}
*(w+count)='\0';
 if(text==EOF){
        return EOF;
    }
return count;

}
int substring( char * str1, char * str2){ //is str 2 in str 1  aagabahj aba

    int str1len=strlen(str1);
    int str2len=strlen(str2);
    int foundchars=0;

        for(int s=0, t=0; s<str1len; s++) {
            do {
                if( str1[s] == str2[t] ) {
                    if (++foundchars == str2len) { return 1; }
                    s++;
                    t++;
                } else {
                    s=s-foundchars;
                    foundchars=0;
                    t=0;
                }
            } while(foundchars);
        }
        return 0;
}
int similar(char *s, char *t, int n){
    char str[100];
    char newt[100];
    char news[100];
    strcpy(newt,t);
    strcpy(news,s);
    int k=0;

    if(strlen(s)<strlen(t)||strlen(s)-strlen(t)>n){
        return 0;
    }
    for (int i=0; newt[i]!= '\0'; i++){


        for (int j = 0; news[j] != '\0'; j++)
        {
            if (newt[i] == news[j])
            {
                continue;
            }
            else
            {
                str[k] = news[j];
                k++;


            }
        }
        str[k] = '\0';
        strcpy (news, str);
        k = 0;
    }

    if(strlen(news)==n) {
        return 1;
    }else{ return 0;}

}
void print_lines(char * str){
      char checkline[LINE];   
    for (int i = 0; i <LINE ; i++) {      
        if(substring(checkline,str)){
            printf("%s\n", checkline);
        }
    }
}
void print_similar_words(char * str){
     char string[WORD];
    getword(string);
    char words[100][100];
    int i = 0, j = 0, k, length;
    for(k=0; string[k]!='\0'; k++){
        if(string[k] != ' ' && string[k] != '\0'){
            words[i][j++] = string[k];
        }
        else{
            words[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    length = i+1;
    for(i = 0; i < length; i++) {
           if (similar(words[i], str, 1)||similar(words[i], str, 0)) {
                printf("%s \n", words[i]);
            }
        }

}
