#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>

/*
Zhixing Wang 1333101
wangz58@cs.washington.edu

This is a program to test whether we can allocate memory for a 3D point
correctly and assign x, y, z coordinates values to it correcly
*/

/*
Defines a structure called Point3d with x, y, z coordinates
*/
typedef struct point {
	int32_t x;
	int32_t y;
	int32_t z;
} Point3d;

/*
Allocate memory for a Point3d and assigns x, y, z coordinates with
the given values
*/
Point3d * AllocatePoint3d(int32_t x, int32_t y, int32_t z) {

	Point3d * tmp_ptr = (Point3d *) malloc(sizeof(Point3d));

	tmp_ptr->x = x;
	tmp_ptr->y = y;
	tmp_ptr->z = z;

	return tmp_ptr;
}

/*
Check whether we could allocate memory for a Point3d correctly
*/
int main(int argc, char const *argv[]) {
	Point3d * ptr = NULL;

	ptr = AllocatePoint3d(2, 3, 4);

	// when allocating memory is not successful, print a message and exit
	if (ptr == NULL) {
		printf("AllocatePoint3d doesn't correctly allocate Point3d!\n");
		return EXIT_FAILURE;
	} else if (ptr->x != 2 || ptr->y != 3 || ptr->z != 4) {
		// when x, y, z coordinates are not assigned correctly, print messages
		// and exit
		printf("The coordinates of Point3d is not the same as what we want.\n");
		printf("The x coordinate is %d\n", ptr->x);
		printf("The y coordinate is %d\n", ptr->y);
		printf("The z coordinate is %d\n", ptr->z);
		return EXIT_FAILURE;
	}

	// when allocation is successful, free this block of memory and exit
	free(ptr);
	return EXIT_SUCCESS;
}