#include <stdlib.h>

typedef struct clean_string *CleanString;

struct clean_string 
{ 
	int clean_string_length; 
	unsigned char clean_string_characters[4]; 
};

CleanString* doubleTo4bytes (double d)
{
	return NULL;
}