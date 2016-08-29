#include <stdio.h>
/* Note: Program assumes years are in the same century. */

struct date {
	int month, day, year;
};

int compare_dates(struct date d1, struct date d2);
void put_date(struct date d);
int check_dates(struct date d);

int main(void) {
	struct date d1, d2;

	printf("Enter first date (mm/dd/yy): ");
	/* for you to complete */
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);

	printf("Enter second date (mm/dd/yy): ");
	/* for you to complete */
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

	/* Checks here to see if user has entered the correct grade format. */
	if(check_dates(d1) || check_dates(d2) < 0 ){
	printf("Invalid dates entered, please retry.");
		return -1;
	}

	int a = compare_dates(d1, d2);

	if (a < 0) {
		put_date(d1);
		printf(" is earlier than ");
		put_date(d2);
		printf("\n");
	} else if (a > 0) {
		put_date(d2);
		printf(" is earlier than ");
		put_date(d1);
		printf("\n");
	} else {
		printf("The dates entered are equal.");
	}

	return 0;
}

int check_dates(struct date d){
	/* first check to see if the year entered is valid. */
	if (d.year < 0 || d.year > 99) {
		return -1;
	}
	/* second check to see if the month entered is valid. */
	if (d.month < 1 || d.month > 12){
		return -1;
	}
	/* last check to see if the day entered is valid. */
	if (d.day < 1 || d.day > 31){
		return -1;
	}
	return 0;
}

int compare_dates(struct date d1, struct date d2) {
	/* first comparison made of the years here.*/
	if (d2.year < d1.year) {
		return 1;
	} else if (d2.year > d1.year) {
		return -1;
	} else { /* else statement if the years are equal. */
		if (d2.month < d1.month) {
			return 1;
		} else if (d2.month > d1.month) {
			return -1;
		} else { /* else statement used if months compare as equal. */
			if (d2.day < d1.day) {
				return 1;
			} else if (d2.day > d1.day) {
				return -1;
			} else { /* Final Statement used if all date parameters are equal so returns 0. */
				return 0;
			}
		}
	}
}

void put_date(struct date d) {
	printf("%d/%d/%.2d", d.month, d.day, d.year);
}