#include<stdio.h>
#define PI3.14
int main()
{
	//declare variables
	float radius,area;
	//take input
	printf("Enter Radius of Circle(in cm):");
	scanf("%f,&radius");
	//calculate area
	area=pi*radius*radius;
	//display result
	printf("Area of Circle=%.2fcm\n",area);
	return 0;
}
