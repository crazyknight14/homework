#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <math.h>
#include <stdlib.h>

/*
4.24 - montecarlo 
- generate a series of random points (x, y)
- points must fall within the square
- estimate pi
    - pi = 4*(pointsInCircle/totalPoints)
- create a separate thread that will generate a number or random points
    - it will count the number of points that occur within the circle and store them in a global
    - when this thread exits the parent thread will calculate the value of pi
- experiment with the number of random points
    - more points should result in a greater approximation to pi
*/

int amtWanted = 0;
int totalPoints  = 0;

void *pointGen(void *X); 
double approxPi();

int main()
{
    // set rng seed.
    srand(time(NULL));
    pthread_t thread;

    // Don't want to test with a negative number of points.
    do
	{
        printf("Enter points to approximate: ");
        scanf("%d", &amtWanted);  	
	}while (amtWanted <= 0);
  
    // create thread to generate points.
    pthread_create(&thread, NULL, &pointGen, NULL);
    
    // wait for thread to end and clean up.
    pthread_join(thread, NULL);
    
    // calc pi
    double pi = approxPi();
    printf("Pi Approx for %d points is: %f \n", amtWanted, pi);  
    return 0;
}

void *pointGen(void *X)
{ 
    for (int i = 0; i < amtWanted; i++)
    {   
        double X = (double)rand() / RAND_MAX;
        double Y = (double)rand() / RAND_MAX;
        
        if (((X * X) + (Y * Y)) <= 1)
        {
            totalPoints++;
        }
    }
    return NULL;
}

double approxPi()
{
    return (4.0*totalPoints)/amtWanted;
}