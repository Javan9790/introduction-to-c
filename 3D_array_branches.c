/*
3D Array – Multiple Branches
The hotel chain has 3 branches, each with 5 floors and 10 rooms per floor.
1. Use a 3D array chain[3][5][10] to represent all branches.
2. Assign random occupancy (1 or 0) to each room.
3. Calculate and display the total number of occupied rooms across all branches
*/
#include<stdio.h>

int main (){
	int chain[3][5][10];
	int branch,floor,room;
	int occupied,vacant;
	int totaloccupied=0;
	
	
	
	printf("Assign random occupancy to each room(occupied=1 vacant 0):\n" ) ;
	
	for(branch =0;branch<3;branch++){
		printf("Branch %d\n",branch+1);
		for(floor=0;floor<5;floor++){
			printf("Floor %d\n",floor+1);
			for(room=0;room<10;room++){
				chain[branch][floor][room]=rand()%2;
				printf(" %d\n",chain[branch][floor][room]);
				
			}
		}
	}
	
	
	for(branch=0;branch<3;branch++){
		occupied=0;
		vacant=0;
		for(floor=0;floor<5;floor++){
			occupied=0;
			vacant=0;
			for(room=0;room<10;room++){
				if(chain[branch][floor][room]==1)
				occupied++;
			else
				vacant++;
			

				
				
					
				}
			}
			
			
			totaloccupied +=occupied;
		}
	
	printf("Total number of occupied rooms across all branches: %d\n",totaloccupied);

	return 0;
}