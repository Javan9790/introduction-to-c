/*
using while loop
print 1-500
*/

#include <stdio.h>

int main (){
	
	printf("using while loop.\n");
	
	int i=500; //start
	
	while(i>=1) //stop
	{
		printf("%d  \n",i);
		--i;
		
	}
	return 0;
}