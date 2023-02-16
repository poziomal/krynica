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