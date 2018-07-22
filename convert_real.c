#include <stdlib.h>

#define Length(s) (*(unsigned long *)(s))
#define Chars(s) ((char*)(1+(unsigned long *)(s)))
#define FLOAT_BYTES 4

typedef struct float_string *FloatString;

struct float_string
{ 
	int length;
	unsigned char chars[FLOAT_BYTES]; 
};

union float_bytes
{
	float f;
	unsigned char bs[FLOAT_BYTES];
};

FloatString* doubleTobytes32 (double d)
{
	union float_bytes data;
	data.f = (float) d;

	FloatString* s = malloc(sizeof(struct float_string));
	Length(s) = FLOAT_BYTES;
	for (int i=0; i < FLOAT_BYTES; i++)
	{
		Chars(s)[i] = data.bs[i];
	}
	return s;
}

double bytesToDouble32(FloatString* s)
{
	union float_bytes data;
	for (int i=0; i < FLOAT_BYTES; i++)
	{
		data.bs[i] = Chars(s)[i];
	}
	return data.f;
}