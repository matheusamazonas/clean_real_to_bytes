#include <stdlib.h>

#define Length(s) (*(unsigned long *)(s))
#define Chars(s) ((char*)(1+(unsigned long *)(s)))

typedef struct float_string *FloatString;

struct float_string
{ 
	int length; 
	unsigned char chars[4]; 
};

union float_bytes
{
	float f;
	unsigned char bs[4];
};

FloatString* doubleTo4bytes (double d)
{
	union float_bytes data;
	data.f = (float) d;

	FloatString* s = malloc(sizeof(struct float_string));
	Length(s) = 4;
	for (int i=0; i < 4; i++)
	{
		Chars(s)[i] = data.bs[i];
	}
	return s;
}

double bytesToDouble(FloatString* s)
{
	union float_bytes data;
	for (int i=0; i < 4; i++)
	{
		data.bs[i] = Chars(s)[i];
	}
	return data.f;
}