#include <stdio.h> /*defines three variable types, several macros, and various functions for performing input and output.*/
#include <stdlib.h> /*defines four variable types, several macros, and various functions for performing general functions.*/
#include <string.h>/*defines one variable type, one macro, and various functions for manipulating arrays of characters.*/

char* readString(char* fileName){/*declares a function that takes a C- string representing the filename as input and returns a C-string as the output*/

/*open the file 'fileName' in read mode ("r")
if file cannot be opened, print an error message and return NULL*/

FILE* file = fopen(file, "r");
if(file == NULL){
    perror("Error opening file");
    return NULL;
}
/*allocate memory to store the line we read from the file. allocate space for 100 characters*/
char* string =(char*)malloc(sizeof(char)*100);

/*check that allocation was sucessful, use fscanf to read up to 99 characters until end of file is reached
if the line is read successfully null-terminate it; if fscanf cannot read the line free the memory and set to NULL*/
if(string != NULL){
    if (fscanf(file, "%99[^\n]", string)== 1){
        string[99]='\0';
    }else{
        free(string);
        string = NULL;
    }
}
/*close the file and return the line*/
fclose(file);
return string;
}

char* mysteryExplode(const char* str){
    /*find the length of the string*/
    /*calculate the length of the exploded string N*(N+1)/2 +1 (+1 is for the null mark at the end of the string)*/
    /*dynamically allocate memory that is the size of our exploded string*/
    /*initialize a pointer to the beginning of the exploded string*/
    /* create a for loop which iterates through the characters of the string*/
    /*null terminate the string*/
    /*return the exploded string*/
}

