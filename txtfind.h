#ifndef TXTFIND_H
#define TXTFIND_H
#define LINE 256
#define WORD 30

int Getline(char s[]);
int getword(char w[]);
int substring( char * str1, char * str2);
int similar(char *s, char *t, int n);
void print_lines(char * str);
void print_similar_words(char * str);

#endif
