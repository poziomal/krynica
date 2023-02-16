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
    int size = sizeof(FILE);
    printf("Size of the type FILE is:%d\n",size);
    int size2 = sizeof(*fptr);
    printf("Size of the pointer *fptr:%d\n",size2);
     return 0;
}