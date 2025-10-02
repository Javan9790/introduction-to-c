/*
0-30 Units =20 KES per unit
31-60 units =25 KES per unit
Above 60 units =30 KES per unit
*/
// import library header
# include<stdio.h>

//main function
int main (){
// variable declaration
int water_units;
float totalbill;

//prompt the user to enter water_units
printf("Enter water_units:");
scanf("%d", & water_units);
printf("water_units are %d\n",water_units);

if(water_units >=0 && water_units <=30\t)	{
	totalbill = water_units * 20;
}

else if(water_units >=31 && water_units <=60\t){
	totalbill = water_units * 25;	
	}
	
else if(water_units >=60\t) {
	totalbill = water_units * 60;
}
//Display the totalbill
totalbill = water_units * totalbill;
printf("totalbill is KES %.2f", totalbill );

return 0 ;

}

	
	

	

