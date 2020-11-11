#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct amusementPark{

    // D --> The duration of the ride
    // P --> The score given by the friends
    // ratio --> The ratio of score to time

	unsigned short D, P;
	double ratio;

} amusementPark;

int compare(amusementPark *a, amusementPark *b);

void main (){

    // H -- > An identifier instance
	// N -- > The number of rides
	// T -- > The time in minutes
	// temp --> temporary variables

	unsigned short i, H, N, T, temp, totalScore, totalAmountOfTime;

	H = 0;

	while (true){
		scanf("%hu %hu", &N, &T);

		if (N == 0)
			break;

		amusementPark amusementRide[N];

		for (i = 0; i < N; ++i){
			scanf("%hu %hu", &amusementRide[i].D, &amusementRide[i].P);
			amusementRide[i].ratio = (amusementRide[i].P / (double)amusementRide[i].D);
		}

		qsort(amusementRide, N, sizeof(amusementPark), compare);
		i = 0;
		totalScore = totalAmountOfTime = 0;

		while (i < N){
			temp = totalAmountOfTime + amusementRide[i].D;
			if (temp <= T){
				totalScore += amusementRide[i].P;
				totalAmountOfTime = temp;
			}
			else
				i++;
		}
		printf("Instancia %hu\n%hu\n\n", ++H, totalScore);
	}
}

int compare(amusementPark *a, amusementPark *b){
	if (a->ratio == b->ratio)
		return 0;
	else if (a->ratio > b->ratio)
		return -1;
	else
		return 1;
}
