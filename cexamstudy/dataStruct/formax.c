



//=================================================================

struct Person
{
	int age;
	float height;
	char *name;
};

struct Person p;

//=================================================================

struct Person {
	int age;
	float height;
	char *name;
} p;

//=================================================================

struct { int age; float height; char *name; } p, p1, p2;

//=================================================================

struct Person
{
	int age;
	float height;
	char *name;
};

typedef struct Person Person;

Person p;

//=================================================================

struct Person
{
	int age;
	float height;
	char *name;
};

typedef struct Person Human;

//both are equvilent
Human h;
struct Person p;

//=================================================================

//Exquvilent to above
typedef struct Person
{
	int age;
	float height;
	char *name;
} Human;

///=================================================================

//Equvilent
// int *const i;
int i[10]; //released at end of scope
int *i = calloc(10, sizeof(int)); // released on free(i) or at end of program

//=================================================================

typedef struct Person
{
	int age;
	float height;
	char *name;
} Human;


int main(int argc, char const *argv[])
{
	Human *hp = malloc(sizeof(Human)); // allocate memory for the struct
	hp->age = 110;
	hp->height = 4.5;
	hp->name = calloc(20, sizeof(char)); // allocate memory for the data in the struct
	return 0;
}

//=================================================================


char *p;

char * const p; //You can change what I'm pointing to (assining a char), but cannot change WHERE I'm pointing
char const * p; //You can change WHERE I'm pointing, but cannot change the value I'm pointing to

int (*p)();


int *(*p[5])();

int (*(*(*p)[5])())(int);


//=================================================================

#DEFINE SIZE 5;

int * const makeArray(){
	return {18, 12, 32};
}

void printArray(int a[SIZE]){
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d\n", a[i]);
	}
}


int * const makeArray2(){
	int a[] = {18, 12, 32}
	return &a;
}

void printArray2((int [SIZE])* a){
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("%d\n", (*a)[i]);
	}
}

void int main(int argc, char const *argv[])
{
	printArray(makeArray());
	printArray2(makeArray2());
	return 0;
}


//=================================================================


struct day
{
	int startTime;
};
typedef struct day day;

{
	// day d = {25};
	// day *dp = &d;
	day *dp = malloc(sizeof(day));
	// (*dp).startTime = 30;
	dp->startTime = 30;

	free(dp);
}


//=================================================================



int ia[10]; // integer array of size 10
sizeof(ia); // sizeof(int) * 10

int *ip; // pointer to an int
sizeof(*ip); // sizeof(int)



int ia[10]; // integer array of size 10
int *ip = malloc(sizeof(int) * 10); // integer pointer to 10 integer slots

int *ip = calloc(10, sizeof(int)); // clears

sizeof(*ip);


ip = realloc(ip, sizeof(int) * 20);


Pointers to structures
Person *pjohn = &john;
/* modify john’s age */
john.age = 20;
/* use john directly */
pjohn->age = 30;
/* use a pointer to john */
(*pjohn).age = 40;
/* use a pointer to get john, and then use john */