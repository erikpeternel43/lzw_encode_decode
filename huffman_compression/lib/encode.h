#include "dictionary.h"

/* Value thats that presents empty symbol */
#ifndef EMPTY_VALUE
#define EMPTY_VALUE -1
#endif

#ifndef MAX_VALUE
#define MAX_VALUE 256
#endif

#ifndef encode_h
#define encode_h

/* Structure for chars */
typedef struct Symbol Symbol;

struct Symbol 
{
    char symbol;       
    DictNode *node;     
};

/* Functions */
void huff_encode(char *input, char *output);

#endif


