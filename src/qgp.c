#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sodium.h>

#include "zbase56.h"

int main(int argc, char *argv[]) {
	unsigned char pk[crypto_box_PUBLICKEYBYTES];
	unsigned char sk[crypto_box_SECRETKEYBYTES];
	char *file = NULL;
	int c;

	while((c = getopt(argc, argv, "f:")) != -1) {
		switch(c) {
			case 'f':
				file = optarg;
				break;
			default:
				exit(1);
		}
	}
	crypto_box_keypair(pk, sk);
	printf("\npubkey: ");
	for(int i = 0; i < crypto_box_PUBLICKEYBYTES; i++) {
		printf("%02X", (unsigned int)pk[i]);
	}
	printf("\nseckey: ");
	for(int i = 0; i < crypto_box_SECRETKEYBYTES; i++) {
		printf("%02X", (unsigned int)sk[i]);
	}

	return 0;
}