/*
Name:Javan Ichingwa
Reg:PA106/G/28767/25
Description:program to compute volume and surface_area
Volume=pi*radius*radius*height
Surface_area=2*pi*radius*radius+2*pi*radius*height
*/

#include<stdio.h>

int main (){
    //variable declaration
	float radius,height, pi, volume, surface_area;
	
	//introduce pi
	pi = 22/7;

	//prompt the user to enter radius
	printf("\n Enter radius:");
	scanf("%f", &radius);
	
	//prompt the user to enter height
	printf("\n Enter heiight:");
	scanf("%f", &height);
	 
	// compute volume
	volume = pi * radius * radius * height;
	
	//display volume
	printf("\n volume is %f",volume);
	
	//compute surface_area
	surface_area=2*pi*radius*radius*+2*pi*radius*height;
	  
	  //display surface_area
	  printf("\n surface_area is %f",surface_area);
	  
	  return 0;
}
	
	 
