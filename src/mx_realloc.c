#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	unsigned char *rtp = (unsigned char*)ptr;
	unsigned char *New = (unsigned char*) malloc(size);

	if (New == 0)
    	return 0;
	if (ptr == 0)
    	return (void*)New;
	for (size_t i = 0;i < size;i++) {
    	New[i] = rtp[i];
	}
	free(ptr);
	return New;
	}
