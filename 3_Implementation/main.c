#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "train_function.h"
#include "train_function.c"
// Global variables

char source[20], des[20], train[40];
char station[40], cla[40];
int time1, time2, a[55];

void main()
{
	fflush(stdin);
    login();
	int i, j, a1, a2, b, c,x = 0, d, e, r;
	char o;
	printf("Enter Number Of Passengers: ");
    fflush(stdin);
	scanf("%d", &j);

	// Calling details() function with
	// argument number of passenger
	details(j);
	printf("Enter The Source Place: ");
	fflush(stdin);
	gets(source);
	printf("Enter The Destination Place: ");
	gets(des);
	printf("\t\tThe Following Trains "
		"Are Available.....\n");
	printf("\t\t1. Howrah Express.."
		".......10:00 "
		"a.m........Bangalore Station\n");
	printf("\t\t2. Graib Rath Express..."
		".......05:00 "
		"p.m........Hyderabad Station\n");
	printf("\t\t3. Basava Express..."
		".......11:00 "
		"p.m........Mysore"
		" Station\n");
	printf("\t\t4. Seshadri Express"
		".........05:00 "
		"p.m........Tirupati Station\n");
	printf("\t\t5. Prashanti  Express..."
		".........07:00 "
		"a.m.........Bhubaneswar"
		"Station\n");
	scanf("%d", &i);
	do {
		switch (i) {
		case 1: {
			strcpy(train,
				"Howrah Express");
			strcpy(station,
				"Bangalore Station");
			time1 = 10;
			time2 = 00;
			a1 = 2099;
			a2 = 1560;

			// Calling cal() function
			// with the three argument
			// and return value
			d = cal(a1, a2, j);
			printf("Total Bill Amount:"
				" %d\n",
				d);
		}; break;
		case 2: {
			strcpy(train,
				"Graib Rath Express");
			strcpy(station,
				"Hyderabad Station");
			time1 = 05;
			time2 = 00;
			a1 = 1801;
			a2 = 981;

			// Calling cal() function with
			// three argument & return value
			d = cal(a1, a2, j);
			printf("Total Bill Amount:"
				"%d\n",
				d);
		}; break;
		case 3: {
			strcpy(train,
				"Basava Express");
			strcpy(station,
				"Mysore Station");
			time1 = 11;
			time2 = 00;
			a1 = 2199;
			a2 = 1780;

			// Calling cal() function with
			// three argument & return value
			d = cal(a1, a2, j);
			printf("Total Bill Amount: %d\n", d);
		}; break;
		case 4: {
			strcpy(train, "Seshadri Express");
			strcpy(station, "Tirupati Station");
			time1 = 05;
			time2 = 00;
			a1 = 1759;
			a2 = 1200;

			// Calling cal() function with
			// three argument & return value
			d = cal(a1, a2, j);
			printf("Total Bill Amount: %d\n", d);
		}; break;
		case 5: {
			strcpy(train, "Prashanti  Express");
			strcpy(station, "Bhubaneswar Station");
			time1 = 07;
			time2 = 00;
			a1 = 2205;
			a2 = 1905;

			// Calling cal() function with
			// three argument & return value
			d = cal(a1, a2, j);
			printf("Total Bill Amount: %d\n", d);
		}; break;
		default:
			printf("Enter Correct choice.....\n");
			x = 1;
			break;
		}
	} while (x);
	printf("Now Book Your Seats......\n");

	// Calling seat() function with number
	// of passenger
	seat(j);

	// Calling bill() function with
	// the number of passenger
	// and amount argument
	bill(d, j);
}
