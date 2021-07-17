#include <stdio.h>
#include <stdlib.h>


unsigned int getSize(FILE*fp){ //This function get's the size of the text data in a file
	if(fp == NULL){
		puts("ERROR! Couldn't process file");
		exit(1);
	}
	unsigned int size; 
	fseek(fp,0L,SEEK_END);
	size = ftell(fp);
	fseek(fp,0L,SEEK_SET);
	if(size >= 0){
		return size;
	}
}
