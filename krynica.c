#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    char *content =  (char*) malloc(10000000);
    fptr=fopen("input.txt","r");
    fscanf(fptr, "%s", content);
    fclose(fptr);
    printf("%s\n" , content);
    free(content);
     return 0;
}