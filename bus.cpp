#include<stdio.h>
#include<conio.h>
void chd();
void lua();
void pat();
void del();
void gur();
void rtk();
void abl();
main()
{
	int a,b,c,d,i,j,k,l;
	printf("\n\n\t\t\t----------------------");
	printf("\n\n\t\t\tBUS RESERVATION SYSTEM");
	printf("\n\n\t\t\t----------------------\n\n\n");
	printf("\t\tWelcome to JALANDHAR TRANSPORT CORPORATION");
	printf("\n\nEnter your destination from Jalandhar to: \n1. Chandigarh \n2. Ludhiana \n3. Patiala \n4. Delhi \n5. Gurgaon \n6. Rohtak \n7. Ambala ");
	scanf("\n\n%d",&a);	
	switch(a)
	{
		case 1:
			chd();
			break;
		case 2:
			lua();
			break;
		case 3:
			pat();
			break;
		case 4:
			del();
			break;
		case 5:
			gur();
			break;
		case 6:
			rtk();
			break;
		case 7:
			abl();
			break;
		default:
			printf("Invalid Choice.");
	}
}

void chd()
{	int a,b;
		printf("Destination 'CHANDIGARH' selected.");
			printf("\nTotal Distance : 150KM");
			printf("\nTotal Travel Time : 2 Hr. 35 min.");
			printf("\nTotal charge : Rs. 1200 (Rs.8/KM)");
			printf("\nPress 0 to book a ticket and press 1 to cancel.");
			scanf("%d",b);
			if(b==0)
			{
				printf("Your ticket to Chandigarh is now booked.");
				printf("\nDestination : CHANDIGARH.");
				printf("\nFare : Rs.1200.");
			}
			else if(b==1)
			printf("ThankYou.");
			else
			printf("Wrong Input. Try again.");
	}
	void lua()
	{	int a,b;
		printf("Destination 'LUDHIANA' selected.");
			printf("\nTotal Distance : 65KM");
			printf("\nTotal Travel Time : 1 Hr. 15 min.");
			printf("\nTotal charge : Rs. 520 (Rs.8/KM)");
			printf("\nPress 0 to book a ticket and press 1 to cancel.");
			scanf("%d",b);
			if(b==0)
			{
				printf("Your ticket to Ludhiana is now booked.");
				printf("\nDestination : LUDHIANA.");
				printf("\nFare : Rs.520.");
			}
			else if(b==1)
			printf("ThankYou.");
			else
			printf("Wrong Input. Try again.");
	}
	void pat()
	{	int a,b;
		printf("Destination 'PATIALA' selected.");
			printf("\nTotal Distance : 155KM");
			printf("\nTotal Travel Time : 2 Hr. 45 min.");
			printf("\nTotal charge : Rs. 1240 (Rs.8/KM)");
			printf("\nPress 0 to book a ticket and press 1 to cancel.");
			scanf("%d",b);
			if(b==0)
			{
				printf("Your ticket to Patiala is now booked.");
				printf("\nDestination : PATIALA.");
				printf("\nFare : Rs.1240.");
			}
			else if(b==1)
			printf("ThankYou.");
			else
			printf("Wrong Input. Try again.");
	}
	void del()
	{	int a,b;
		printf("Destination 'DELHI' selected.");
			printf("\nTotal Distance : 370KM");
			printf("\nTotal Travel Time : 5 Hr. 35 min.");
			printf("\nTotal charge : Rs. 2960 (Rs.8/KM)");
			printf("\nPress 0 to book a ticket and press 1 to cancel.");
			scanf("%d",b);
			if(b==0)
			{
				printf("Your ticket to Delhi is now booked.");
				printf("\nDestination : DELHI.");
				printf("\nFare : Rs.2960.");
			}
			else if(b==1)
			printf("ThankYou.");
			else
			printf("Wrong Input. Try again.");
	}
	void gur()
	{	int a,b;
		printf("Destination 'GURGAON' selected.");
			printf("\nTotal Distance : 408KM");
			printf("\nTotal Travel Time : 6 Hr. 15 min.");
			printf("\nTotal charge : Rs. 3264 (Rs.8/KM)");
			printf("\nPress 0 to book a ticket and press 1 to cancel.");
			scanf("%d",b);
			if(b==0)
			{
				printf("Your ticket to Gurgaon is now booked.");
				printf("\nDestination : GURGAON.");
				printf("\nFare : Rs.3264.");
			}
			else if(b==1)
			printf("ThankYou.");
			else
			printf("Wrong Input. Try again.");
	}
	void rtk()
	{	int a,b;
		printf("Destination 'ROHTAK' selected.");
			printf("\nTotal Distance : 365KM");
			printf("\nTotal Travel Time : 5 Hr. 30 min.");
			printf("\nTotal charge : Rs. 1200 (Rs.8/KM)");
			printf("\nPress 0 to book a ticket and press 1 to cancel.");
			scanf("%d",b);
			if(b==0)
			{
				printf("Your ticket to Rohtak is now booked.");
				printf("\nDestination : ROHTAK.");
				printf("\nFare : Rs.2920.");
			}
			else if(b==1)
			printf("ThankYou.");
			else
			printf("Wrong Input. Try again.");
	}
	void abl()
	{	int a,b;
		printf("Destination 'AMBALA' selected.");
			printf("\nTotal Distance : 170KM");
			printf("\nTotal Travel Time : 2 Hr. 40 min.");
			printf("\nTotal charge : Rs. 1360 (Rs.8/KM)");
			printf("\nPress 0 to book a ticket and press 1 to cancel.");
			scanf("%d",b);
			if(b==0)
			{
				printf("Your ticket to Ambala is now booked.");
				printf("\nDestination : AMBALA.");
				printf("\nFare : Rs.1360.");
			}
			else if(b==1)
			printf("ThankYou.");
			else
			printf("Wrong Input. Try again.");
	}
