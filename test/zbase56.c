#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "zbase56.h"

int main(void) {
    const char *sample = "hello world";
    char output[ZBASE56_LENGHT(sizeof(sample))]; 
    zbase56_enc(sample, strlen(sample), output, sizeof(output));
    printf("%s\n", output);
    return -1;
}