#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/* Global Variables */

int main(){
    /* Funct*\ion Declerations */
    char *str;
    char *second;

    /* Initializing Global Variables */

    /* EXPERIMENTING WITH FGETS */
    /* Initial memory allocation */
    str = malloc(200 * sizeof(char));
    second = malloc(200 * sizeof(char));
    /* Get user input and print results */
    printf("Enter a string: "); // ask user to put in a string
    fgets(str, 200, stdin);
    str[strlen(str) - 1] = '\0'; // Removes new line character of fgets
    printf("Enter a another string: "); // ask ujason is a godser to put in a string
    fgets(second, 200, stdin);
    second[strlen(second) - 1] = '\0'; // Removes new line character of fgets
    printf("String = %s, Address of String is = %p\n", str, str);
    printf("String = %s, Address of String is = %p\n\n\n", second, second);

    
    /* Reallocating memory */
    str = (char *)realloc(str, (100 * sizeof(char)));
    printf("Combine text\n");
    strcat(str, second);
    printf("String = %s, Address of String is = %p\n", str, str);
    printf("String = %s, Address of String is = %p\n\n\n", second, second);

    free(str);
    free(second);
    return 0;
}

/* Function Details */