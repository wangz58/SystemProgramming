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
#include <stdbool.h>  // for boolean
#include <stdlib.h>   // for exit, EXIT_SUCCESS
#include <math.h>     // for using sqrt()
#include <stdint.h>   // for uint64_t etc

#include "./NthPrime.h"

uint64_t NthPrime(uint16_t n) {

	// check for valid input
	if (n < 1) {
		printf("n should start from 1\n");
		exit(EXIT_FAILURE);
	}

	uint64_t num = 2;
	int i = 1;

	// keep finding the next prime until we have reached the nth one
	while (i < n) {

		// get the next number
		num++;

		// if we reached the largest integer, we can't find another larger prime,
		// so exit the program
		if (num == UINT64_MAX) {
			printf("We have reached the largest uint64_t, unable to find the next prime.\n");
			exit(EXIT_FAILURE);
		}

		// check whether the current number is divisible by numbers from 2 to the
		// square root of its self
		bool foundOne = true;
		uint64_t therashold = (uint64_t) sqrt(num);
		for (int j = 2; j <= therashold + 1; j++) {
			if (num % j == 0) {
				foundOne = false;
				break;
			}
		}
		// record this number if it is a prime; otherwise, do nothing
		if (foundOne) {
			i++;
		}
	}
	return num;
}