#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    fptr=fopen("input.txt","r");
    int readBytes = 0;
    int variableX = 0;
    int i = 0;
    int content_size = 4;
    char *content =  (char*) malloc(content_size);
    do
    {
        do
        {
            variableX = fgetc(fptr);
            content[i] = (char)variableX;
            i=i+1;
        } while (i<content_size && variableX != EOF);
        content[i] = 0;
        i = 0;
        if (variableX != EOF && i != 1){
            printf("%s" , content);
        }
    } while (variableX!=EOF);
    printf("\n");
    content[readBytes+1] = 0;
    fclose(fptr);
    printf("ilosc znakuw:%d\n" , readBytes);
    free(content);
    int size = sizeof(FILE);
    printf("Size of the type FILE is:%d\n",size);
    int size2 = sizeof(FILE*);
    printf("Size of the pointer *fptr:%d\n",size2);
    int size3 = sizeof(int);
    printf("Size of the type int is:%d\n",size3);
    int size4 = sizeof(long);
    printf("Size of the type long is:%d\n",size4);
    int size5 = sizeof(int*);
    printf("Size of the pointer *int:%d\n",size5);
    int size6 = sizeof(long*);
    printf("Size of the pointer *long:%d\n",size6);
    return 0;
}