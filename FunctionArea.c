#include <stdio.h>

main()
{
	float findAreaRectangle(float width, float length);
	float findAreaCircle(float radius);
	int choice;
	float width,length,radius,area;

	for(;;)
	{
	printf("\nEnter the number you want to use\n1.Area of a rectangle\n2.Area of circle\nEnter your choice: ");
	scanf("%d",&choice);

	switch (choice)
	{
		case 1: printf("Enter the length: ");
				scanf("%f",&length);
				printf("Enter the width: ");
				scanf("%f",&width);
				area = findAreaRectangle(width,length);
				printf("The area of the rectangle is %f",area);
				break;

		case 2: printf("Enter the radius: ");
				scanf("%f",&radius);
				area = findAreaCircle(radius);
				printf("The area of the circle is %f",area);
				break;

		default: printf("Your choice is invalid");
                 break;
	}
    }
}

float findAreaRectangle(float width, float length)
{
	float area;
    area = length * width;
    return area;
}

float findAreaCircle (float radius)
{
   float area;
   area = 3.142 * radius * radius;
   return area;
}
