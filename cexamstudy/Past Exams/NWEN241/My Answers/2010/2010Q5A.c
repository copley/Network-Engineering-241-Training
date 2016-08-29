void swap (char* c1, char* c2) {
	char tmp = &c1;
	c1 = c2;
	c2 = tmp;
}