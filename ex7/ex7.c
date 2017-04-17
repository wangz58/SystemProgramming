/* Copyright [2017] Zhixing Wang
 * 1333101
 * wangz58@cs.washington.edu
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/dir.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <dirent.h>
#define SIZE 1024

// check whether the given file has ".txt" extension
bool has_txt_extension(char const *name);
// read content from the given file name and write to stdout
void readFileAndOutput(char *file_name);
// find each file with ".txt" extension in the given directory
int main(int argc, char const *argv[]) {
	if (argc != 2) {
		printf("usage: ./ex7 <path>\n");
		exit(1);
	}
	// open the directory
	DIR *dirptr=opendir(argv[1]);
	if (dirptr == NULL) {
		printf("directory open failed.\n");
		exit(1);
	}
	// get the next entry in this directory
	struct dirent *entry = readdir(dirptr);
	// check every entry
	while (entry != NULL) {
		// if this file ends in ".txt" extension
		if (has_txt_extension(entry->d_name)) {
			readFileAndOutput(entry->d_name);
		}
		entry = readdir(dirptr);
	}
	// close this directory
	closedir(dirptr);
	return 0;
}
void readFileAndOutput(char *file_name) {
	// open file and handle error
	int fd = open(file_name, O_RDONLY);
	if (fd == -1) {
		fprintf(stderr, "Could not open file for reading\n");
		exit(1);
	}
	// prepare buffer to read file
	char buf[SIZE];
	ssize_t len;
	// continue read file and handle error
	do {
		len = read(fd, buf, SIZE);
		if (len == -1) {
			if (errno != EINTR) {
				close(fd);
				perror(NULL);
				exit(1);
			}
			continue;
		}
		// write file content to stdout
		size_t total = 0;
		ssize_t wlen;
		while (total < len) {
			// write (len - total) number of bytes starting from
			// (buf + total) to stdout, which is represented as 1
			wlen = write(1, buf + total, len - total);
			if (wlen == -1) {
				if (errno != EINTR) {
					close(fd);
					perror(NULL);
					exit(1);
				}
				continue;
			}
			total += wlen;
		}
	} while (len > 0);

	close(fd);
}
bool has_txt_extension(char const *name) {
    size_t len = strlen(name);
    return len > 4 && strcmp(name + len - 4, ".txt") == 0;
}
