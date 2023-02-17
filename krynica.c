#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr;
    char *content =  (char*) malloc(999999999);
    fptr=fopen("input.txt","r");
    int readBytes = 0;
    int szczepIQ = 0;
    do
    {
     szczepIQ = fscanf(fptr, "%c", content + readBytes);
     readBytes += szczepIQ;
    } while (szczepIQ>0);
    content[readBytes+1] = 0;
    fclose(fptr);
    printf("%s\n" , content);
    printf("%d\n" , szczepIQ);
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