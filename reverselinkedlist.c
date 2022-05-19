#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 64

int main(void) {

    int x;
    char *string = malloc(sizeof(*string)*SIZE);

    if (string == NULL) {
        fprintf(stderr,"Error while allocating memory!\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter some text: ");
    fgets(string,SIZE,stdin);

    int len = strlen(string);

    for(x=len;x!=-1;x--) {
        printf("%c",string[x]);
    } putchar('\n');

    free(string);

    return EXIT_SUCCESS;
    
}