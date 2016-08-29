#include <stdio.h>
#include <stdlib.h>

void removeEs(FILE, FILE);

int main (char** args){
	FILE fpr = fopen(args[0], “r”);
	FILE fpw = fopen(args[1], “w”);
	removeEs(fpr, fpw);
	fclose(fpr);
	fclose(fpw);
	return 0;
}


void removeEs(FILE src, FILE dst) {
	if(src == NULL || dst == NULL) {
		printf(stderr, "files could not be opened/read.");
		abort();
	} else {
		char c;
		while((c=fgetc(src))!=EOF) {
			if (c != 'e' && c != 'E') {
				fprintf(dst,"%c",c);
			}
		}
	}
}