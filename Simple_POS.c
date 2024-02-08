#include<stdio.h>
#include<conio.h>

int main()
{
	int choose, item, amount;
	printf("\n\n\t\t\t\t\t======================");
	printf("\n\n\t\t\t\t\t**NATIONAL ART STORE**");
	printf("\n\n\t\t\t\t\t======================");
	printf("\n\n\t\t\t\t\t    ITEMS ON SALE!");
	printf("\n\n\t\t\t\t\t        HURRY!");
	printf("\n\n\t\t1.ACRYLIC PAINT");
	printf("\n\n\t\t2.PAINT BRUSH SET");
	printf("\n\n\t\t3.PENS");
	printf("\n\n\t\t4.CANVAS");
	printf("\n\n\t\t5.SKETCHBOOK");
	
	printf("\n\n\n\t\tENTER YOUR CHOICE:");
	
	scanf("%d",&choose);
	
	if (choose==1)
	{
		printf("\n\n\t=You just chose ACRYLIC PAINT=");
		printf("\n\n\t\t1. Acrylic Gouache..........P750.00");
		printf("\n\t\t2. Heavy Body Acrylics..........P670.00");
		printf("\n\t\t3. High Flow Acrylics..........P1,350.00");
		
		printf("\n\n\t\tENTER YOUR CHOICE:");
		
		scanf("%d", &item);
		
		if(item==1)
		{
			printf("\n\n\t\t-Acrylic Gouache");
			amount= 750;
			quantity(&amount);
		}
		
		else if (item==2)
		{
			printf("\n\n\t\t-Heavy Body Acrylics");
			amount= 670;
			quantity(&amount);
		}
		
		else if (item==3)
		{
			printf("\n\n\t\t-High Flow Acrylics");
			amount= 1350;
			quantity(&amount);
		}
	}
	
	else if (choose==2)
	{
		printf("\n\n\t=You just chose PAINT BRUSH SET=");
		printf("\n\n\t\t1. Round Brush Set..........P72.00");
		printf("\n\t\t2. Flat Brush Set..........P65.00");
		printf("\n\t\t3. Filbert Brush Set..........P90.00");
		
		printf("\n\n\n\t\tENTER YOUR CHOICE:");
	
	scanf("%d",&item);
		
		if(item==1)
		{
			printf("\n\n\t\t-Round Brush Set");
			amount= 72;
			quantity(&amount);
		}
		
		else if (item==2)
		{
			printf("\n\n\t\t-Flat Brush Set");
			amount= 65;
			quantity(&amount);
		}
		
		else if (item==3)
		{
			printf("\n\n\t\t-Filbert Brush Set");
			amount= 90;
			quantity(&amount);
		}
	}
		else if (choose==3)
	{
		printf("\n\n\t=You just chose PENS=");
		printf("\n\n\t\t1. Calligraphy Pen..........P38.00");
		printf("\n\t\t2. Highlighter Pen..........P25.00");
		printf("\n\t\t3. Ballpoint Pen..........P10.00");
		
		printf("\n\n\n\t\tENTER YOUR CHOICE:");
	
	scanf("%d",&item);
		
		if(item==1)
		{
			printf("\n\n\t\t-Calligraphy Pen");
			amount= 38;
			quantity(&amount);
		}
		
		else if (item==2)
		{
			printf("\n\n\t\t-Highlighter Pen");
			amount= 25;
			quantity(&amount);
		}
		
		else if (item==3)
		{
			printf("\n\n\t\t-Ballpoint Pen");
			amount= 10;
			quantity(&amount);
		}
	}
		else if (choose==4)
	{
		printf("\n\n\t=You just chose CANVAS=");
		printf("\n\n\t\t1. 18x24 inches..........P300.00");
		printf("\n\t\t2. 12x18 inches..........P120.00");
		printf("\n\t\t3. 8x10 inches..........P75.00");
		
		printf("\n\n\n\t\tENTER YOUR CHOICE:");
	
	scanf("%d",&item);
		
		if(item==1)
		{
			printf("\n\n\t\t-18x4 inches");
			amount= 300;
			quantity(&amount);
		}
		
		else if (item==2)
		{
			printf("\n\n\t\t-12x18");
			amount= 120;
			quantity(&amount);
		}
		
		else if (item==3)
		{
			printf("\n\n\t\t-8x10 inches");
			amount= 75;
			quantity(&amount);
		}
	}
		else if (choose==5)
	{
		printf("\n\n\t=You just chose SKETCHBOOK=");
		printf("\n\n\t\t1. Van Gogh Sketchbook..........P199.00");
		printf("\n\t\t2. Canson Sketchbook..........P150.00");
		printf("\n\t\t3. Berkeley Sketchpad..........P120.00");
		
		printf("\n\n\n\t\tENTER YOUR CHOICE:");
	
	scanf("%d",&item);
		
		if(item==1)
		{
			printf("\n\n\t\t-Van Gogh Sketchbook");
			amount= 199;
			quantity(&amount);
		}
		
		else if (item==2)
		{
			printf("\n\n\t\t-Canson Sketchbook");
			amount= 150;
			quantity(&amount);
		}
		
		else if (item==3)
		{
			printf("\n\n\t\t-Berkeley Sketchpad");
			amount= 120;
			quantity(&amount);
		}
	}
		else 
		{
			printf("\n\n\t=Choose a number from 1-5 only. Thank you!=");
		}
		
		return 0;
	}
	
	int quantity (int *qty)
 
	{
		int total, change, amount, money;
		printf("\n\n\n\tNumber of quantity: ");
		scanf("%d", &amount);
		
		total= *qty*amount;
		
		printf("\n\n\n\tTotal is %d", total);
		
		printf("\n\n\n\tEnter the amount of money given: ");
		scanf("%d", &money);
		
		change=money-total;
	
		printf("\n\n\n\tYour change is: %d", change);
		printf("\n\n\n\tTHANK YOU FOR VISITING OUR SHOP!!!");
		printf("\n\n\tKEEP MAKING ART:)");
		printf("\n\n\tHAVE A NICE DAY!");		
	
	}