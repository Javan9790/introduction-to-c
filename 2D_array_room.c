/*
2D Array – Room Occupancy (One Branch)
Each branch has 5 floors, and each floor has 10 rooms.
1. Use a 2D array occupancy[5][10] where each element represents a room (1 =
occupied, 0 = vacant).
2. Input random occupancy data (or simulate input).
3. Display the number of occupied and vacant rooms per floor.
*/

# include<stdio.h>

int main(){
	int floor,room;
	int occupancy [5][10];
	int occupied,vacant;
	
	printf(" random occupancy data(occupied=1 ,vacant=0):\n" );
	
	for(floor=0;floor<5;floor++){
	printf(" Floor %d\n",floor+1);
		
	for(room=0;room<10;room++){
	occupancy[floor][room]=rand()%2;
	printf("%d\n",occupancy[floor][room]);
	}
	
	}
	printf("number of occupied and vacant rooms per floor:\n\n");
	for(floor=0;floor<5;floor++){
		occupied=0;
		vacant=0;
		for(room=0;room<10;room++){
			if(occupancy[floor][room]==1)
			occupied++;
		else
			vacant++;
		}
	}
	printf("Each Floor %d occupied;%d vacant \n",occupied,vacant);
	return 0;
}