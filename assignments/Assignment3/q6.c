#include <stdio.h>
/* Note: Program assumes years are in the same century. */

struct date { int month, day, year; };

int compare_dates(struct date *, struct date *);
void put_date(struct date *);
int check_dates(struct date d);


int main(void) {
	struct date d1, d2;

	printf("Enter first date (mm/dd/yy): ");
	/* for you to complete */
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	/*	printf("%d/%d/%d\n",d1.month, d1.day, d1.year);*/
	printf("Enter second date (mm/dd/yy): ");
	/* for you to complete */
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

	/* check dates to see if user has entered in the correct date format*/
	if (check_dates(d1) || check_dates(d2) < 0 ){
		printf("Invalid dates entered, please retry.\n");
			return -1;
	}
	/* Check here to see which dates are earlier*/

	int a = compare_dates(&d1, &d2);

	if (a < 0) {
		put_date(&d1);
		printf(" is earlier than ");
		put_date(&d2);
		printf("\n");
	} else if (a > 0) {
		put_date(&d2);
		printf(" is earlier than ");
		put_date(&d1);
		printf("\n");
	} else {
		printf("The dates compare as equal");
	}

	return 0;
}
	    
int check_dates(struct date d){
	/*first check to see if year is valid*/
	if (d.year < 0 || d.year > 99) {
		return -1;
	}
	/*second check to see if month is valild*/
	if (d.month < 1 || d.month > 12){
		return -1;
	}
	/*third check to see if day is valid*/
	if (d.day < 1 || d.day > 31){
		return -1;
	}
	return 0;
}

int compare_dates(struct date *d1, struct date *d2) {
	/*first comparison to compare years*/
	if (d2->year < d1->year) {
		return 1;
	} else if (d2->year > d1->year){
		return -1;
	} else { /* else statement to check the months is years are equal */
		if (d2->month < d1->month){
			return 1;
		} else if (d2->month > d1->month) {
			return -1;
		} else { /* else statement to check if both months compare as equal as well */
			if (d2->day < d1->day){
				return 1;
			} else if (d2->day > d1->day){
				return -1;
			} else { /* returns case here if both the dates are equal*/
				return 0;
			}
		}
	}
}

void put_date(struct date *d) {
	printf("%d/%d/%.2d", d->month, d->day, d->year);
} 