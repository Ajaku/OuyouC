#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ASIZE 10000
#define RAND_SEED 0x1531031

void my_sort(int left, int right, int a[]);

int main(void){
	clock_t start,end;
	inti, a[ASIZE];
	srand(RAND_SEED);

	for(i=0; i<ASIZE; i++){

		a[i] = rand();
	}

	start = clock();
	my_sort(0, ASIZE-1, a);
	end = clock
	printf("%.3f‚Å‚µ‚½",(end-start)/(double)CLOCKS_PER_SEC);
	getchar();
	return 0;
}

void my_sort(int left, int right, int a[]){
	return;
}