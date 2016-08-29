float max_diff(const float * a, int n) {
	int i;
	float max = 0, min = 0;
	for (i=0; i<n; i++) {
		if (*(a+i) > max) 
			max = *(a+i);
	}
	
	for (i=0; i<n; i++) {
		if (*(a+i) < min) 
			min = *(a+i);
	}
	
	return (float) max - min;
}