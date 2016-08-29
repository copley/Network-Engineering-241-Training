typedef struct {
	int i;
	float f;
} int_float;

int_float plus (int_float n1, int_float n2) {
	int_float result;
	result.i=(int)n1.i+n2.i;
	result.f=(float)n1.f+n2.f;
	return result;
}