int is_within(const char * str, char ch) {
	while (*(str+i) != "\0") {
		if (*(str+i) == ch) 
			return 1;
		i++;
	}
	return 0;
}