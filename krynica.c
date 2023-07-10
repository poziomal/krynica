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
        if ((variableX == EOF) && (readBytes == 0)){
            printf("plik pusty"); 
        }
    } while (variableX!=EOF);
    printf("\n");
    content[readBytes+1] = 0;
    fclose(fptr);
    printf("ilosc znakuw:%d\n" , readBytes);
    free(content);
    return 0;
}