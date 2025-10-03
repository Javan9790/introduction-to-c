/*
A student is eligible for exam if:
Attendance is >=75% ,ADD
Average marks are >=40
Otherwise print"Not eligible"
*/

# include <stdio.h>
//main function
int main(){
	//variable declaration
float attendance,average_marks;

//prompt the user to enter attendance
printf(" Enter attendance\t:" );
scanf("%f", &attendance);

//prompt the user to enter average-marks
printf(" Enter average_marks:");
scanf("%f", &average_marks);


if(attendance >=75 & average_marks >=40){
printf("eligible");
}
else{
	printf("Not eligible");
}
return 0;

}
