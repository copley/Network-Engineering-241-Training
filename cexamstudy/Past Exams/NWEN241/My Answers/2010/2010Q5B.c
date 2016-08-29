void (char* str) {
	char * begin  = str;
	char * end = str;
 
	for (c = 0; c < strlen(str) - 1; c++)
		end++;
 
	for (c = 0; c < strlen(str)/2; c++)
	{        
      char temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
	}
}