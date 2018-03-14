//this file contains function definition of classification()
#include "score.h"
#include <stdio.h>

void classification(const int m[], int stat[]){
	int i;
	for (i=0; i<MAX && m[i]!=SENTINEL; ++i){
		switch(m[i]){
			case 0: stat[0]++; break;	//DO NOT forget BREAK
			case 1: stat[1]++; break;	//DO NOT forget BREAK
			case 2: stat[2]++; break;	//DO NOT forget BREAK
			case 3: stat[3]++; break;	//DO NOT forget BREAK
			case 4: stat[4]++; break;	//DO NOT forget BREAK
			case 5: stat[5]++; break;	//DO NOT forget BREAK
			case 6: stat[6]++; break;	//DO NOT forget BREAK
		}	//switch
	}	//end  of for
	printf("Classification done.\n");
}
