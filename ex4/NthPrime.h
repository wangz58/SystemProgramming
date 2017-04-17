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

#include <stdint.h> // for uint64_t etc

/*
 *  Returns the nth prime number
 *
 *  NthPrime(1) refers to the first prime, will return 2
 *  NthPrime(2) refers to the second prime, will return 3
 *  NthPrime(3) refers to the third prime, will return 5
 */
uint64_t NthPrime(uint16_t n);