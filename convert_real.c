#include <stdlib.h>

#define Length(s) (*(unsigned long *)(s))
#define Chars(s) ((char*)(1+(unsigned long *)(s)))
#define FLOAT_BYTES 4
#define DOUBLE_BYTES 8

typedef struct float_string *FloatString;
typedef struct double_string *DoubleString;

struct float_string
{ 
	int length;
	unsigned char chars[FLOAT_BYTES]; 
};

struct double_string
{
	int length;
	unsigned char chars[DOUBLE_BYTES];
};

union float_bytes
{
	float f;
	unsigned char bs[FLOAT_BYTES];
};

union double_bytes
{
	double d;
	unsigned char bs[DOUBLE_BYTES];
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

DoubleString* doubleTobytes64 (double d)
{
	union double_bytes data;
	data.d = d;

	DoubleString* s = malloc(sizeof(struct double_string));
	Length(s) = DOUBLE_BYTES;
	for (int i=0; i < DOUBLE_BYTES; i++)
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

double bytesToDouble64(DoubleString* s)
{
	union double_bytes data;
	for (int i=0; i < DOUBLE_BYTES; i++)
	{
		data.bs[i] = Chars(s)[i];
	}
	return data.d;
}