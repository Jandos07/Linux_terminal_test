#include<stdio.h>

int main(){
	int battery_life = 0;
	int input_valid = 0;

	do{
	printf("Enter your current battery life(0-100): ");
	if(scanf("%d",&battery_life) != 1){
		printf("Invalid battery life!, Please input a valid battery life\n");
while(getchar() != '\n');

	}else if (battery_life < 0 || battery_life > 100){
printf("Invalid battery life! Your battery life must be between 0 and 100\n");	}
	else 
		input_valid = 1;
	}while(battery_life < 0 || battery_life > 100);

	if (battery_life >= 21 && battery_life <= 100)
		printf("Your current battery condition is in good condition\n");
	else if (battery_life >= 20 && battery_life <= battery_life >= 5)
		printf("Your battery is low! You need to charge your phone\n");
	else
	       	printf("Please charge your phone. It is going to shut down\n");
	return 0;}
