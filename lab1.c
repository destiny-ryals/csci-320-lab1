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
/*check that allocation was sucessful, use fscanf to read up to 99 characters untile end of file is reached
if the line is read successfully null-terminateit if fscanf cannot read the line free the memroy anf set to NULL*/
/*close the file and return the line*/

}

char* mysteryExplode(const char* str){
    
}

