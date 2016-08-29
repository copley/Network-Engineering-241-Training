void writelistintext (Node * pn) {
	FILE *fpw;
	char *filetow = "list.dat";
	if((fpw = fopen(filetow, "w")) == NULL)
		fprintf(stderr, "file %s could not be opened.\n", filetow);
	else
		for( ; pn != NULL; pn = pn->next)
			fprintf(fpw, "%c \t %x \n", pn->data, pn->next);
	fclose(fpw);
}

void writelisttofile (Node * pn) {
	FILE *fpw;
	char *filetow = "list.dat";
	if((fpw = fopen(filetow, "w")) == NULL)
		fprintf(stderr, "file %s could not be opened.\n", filetow);
	else
		for( ; pn != NULL; pn = pn->next)
			fwrite(pn, Node_Size, 1, fpw);
	fclose(fpw);
}