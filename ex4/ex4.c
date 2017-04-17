/* Zhixing Wang
 * 1333101
 * wangz58@cs.washington.edu
 */

/*
 * Copyright 2012-13 Steven Gribble, Hal Perkins
 *
 *  This file is part of the UW CSE 333 course exercises (333exer).
 *
 *  333exer is intended solely for the private use of students
 *  enrolled in UW CSE 333 and may not be copied, transmitted, or made
 *  available to others, including by posting on publicly accessible
 *  web sites or other services. Inappropriate use of this information
 *  may represent a violation of the course, department, or university
 *  Academic Integrity policies.
 *
 *  333exer is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#include <stdio.h>    // for printf
#include <stdlib.h>   // for EXIT_SUCCESS, malloc, free
#include <stdint.h>   // for uint64_t

#include "./NthPrime.h"

/*
 * A main program that prints out the nth prime
 */
int main(int argc, char const *argv[]) {
	
	uint64_t firstPrime = NthPrime(1);
	printf("The 1st prime is %llu\n", firstPrime);

	uint64_t seventhPrime = NthPrime(7);
	printf("The 7th prime is %llu\n", seventhPrime);

	uint64_t thirdPrime = NthPrime(3);
	printf("The 3rd prime is %llu\n", thirdPrime);

	return EXIT_SUCCESS;

}