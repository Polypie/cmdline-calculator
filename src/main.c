#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "typedefs.h"
#include "errormessages.h"

typedef struct
{
	char *input;
	realnumber* numbers;
		
} input;

typedef struct 
{
	char character;
	int line;
	int column;
}character;


char ** scanner(input userinput)
{
		
}

error_msg tokenize(input userinput)
{
	
		
	return ERROR_SYNTAX;	
}


int main()
{
	input uinput; //= malloc(sizeof(input));
	//uinput.input; //= malloc(sizeof(char));
	
	
	scanf(" %s", uinput.input);
	printf("%s", uinput.input);
	
	return 0;
}
