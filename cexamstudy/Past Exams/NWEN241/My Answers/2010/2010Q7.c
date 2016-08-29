typedef struct student {
	int id;
	int age;
	char gender;
} Student;

int pack(Student *);

/*******************************************/

int pack(int id, int age, char g, char cr)
{ 
	int student = 0; /* 00000000 ... 00000000 */
	student |= (g=='M' || g=='m')? 1:0;
	student |= age << 2;
	student |= id << 8;
	return student; /* contain packed info */
}

Student unpack(int stu)
{ 
	Student a;
	int mask1=1, mask2 = 127, mask3 = 8388607;
	/* 1 ‘1’, 7 ‘1’s, 23 ‘1’s */
	a.gender = ((stu&mask1)? 'M':'F');
	a.classrep = ((stu&(mask1<<1))>>1)? 'Y':'N';
	a.age = ((stu&(mask2<<2))>>2);
	a.id = ((stu&(mask3<<9))>>9);
	return a;
}