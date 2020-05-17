#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void THALI(void);
void BEVERAGES_And_SHAKES(void);
void PIZZA_SPECIAL(void);
void BURGER(void);
void NOODLES(void);
void SOUTH_INDIAN(void);
void SOUPS(void);
void STARTERS(void);
void TANDOOR_SNACKS(void);
void MAIN_COURSE(void);
void BREAD_AND_RICE(void);
void DESERTS(void);	
void delay(int );
void intro(void);
void coustomer_details(void);
void menu(void);
void order(void);
int main()
{
	FILE *N;
N=fopen("Order_Details.txt","w");
fclose(N);
int i;
char z;
	intro();
	coustomer_details();
	system("cls");
	rto:
	menu();
	printf("\n     -------------------------------------------------------------------------------");
	OP:
	printf("\n     For going back to menu press 'M' for billing press 'B': ");
	scanf(" %c",&z);
	if(z=='M')
	{
			printf("\n     ");
		for(i=0;i<72;i++)
		{
			 delay(1900000);
			 printf("\xB2");
		}
		goto rto;
	}
		
	else if(z=='B')
	{
			printf("\n     ");
		for(i=0;i<72;i++)
		{
			 delay(1900000);
			 printf("\xB2");
		}
	system("cls");
	order();
    }
    else
    {
    	printf("\n     Wrong Entry Please Try Again");
    	goto OP;
	}

		return 0;
}
void delay(int j)
{
  int i;
  for(i=0;i<j;i++)
  {
  	int c=i;
	  }	
}
void intro()
{
	system("color 0E");
	int i;
 printf("\n\n\n\n\n\n\n\n");
 printf("                                    ");
 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3\xB3\xB3\xB3");
 printf(" ***  CREATIVE  RESTAURANT  *** ");
 printf("\xB3\xB3\xB3\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 printf("\n\n\n\n\n\n                                                                   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3\xB3******  WELCOME  ******\xB3\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 for(i=0;i<1;i++)
 {
 delay(1500000000);
 printf("\n                                    \n                                            Restaurants have become very common today. It is a boon to most of the people who do not know cooking.");
}
for(i=0;i<1;i++)
 {
 delay(1500000000);
 printf("\n                                    \n                                                   The restaurant business is one of the businesses that have been there for many years."); 
}
for(i=0;i<1;i++)
 {
 delay(1500000000);
 printf("\n                                    \n                                                                          It has gone through a lot of makeovers.");
}
for(i=0;i<1;i++)
 {
 delay(1000000000);
}
}

void coustomer_details()
{
	FILE *p;
	FILE *G;
	G=fopen("Coustomer permanent detals.txt","a");
	p=fopen("Coustomer detail.txt","w");
	if(p==NULL)
	{
      printf("Code Error opps!!");
	  exit(1);		
	}
	int i;
 char name[30];
 char mailid[50];	
 char mobile_Number[10];
 printf("\n\n\n\n\n                                   HELLO !! PLEASE ENTER YOUR DETAILS:-");
 printf("\n                                   ====================================");
 printf("\n                                   Mobile Number:-");
 scanf("%s",mobile_Number);
 printf("                                   NAME:-");
 fflush(stdin); 
scanf("%s",name);
 fflush(stdin);
 printf("                                   Mail_id:-");
 scanf("%s",mailid);fflush(stdin);
 
 fprintf(p,"%s %s %s",mobile_Number,name,mailid);
 fprintf(G,"%s\n %s\n %s\n",mobile_Number,name,mailid);
 fclose(p);
 fclose(G);
 printf("\n\n                                   ");
 for(i=0;i<40;i++)
 {
 	delay(10000000);
 	printf("\xB2\xB2\xB2");
 }
}
void menu()
{ 
    system("cls");
	int serial_no,i;
    char name[30];
    char mobile_Number[10];
    char mailid[50];
	system("color 0E");
	printf("\n\n\n\n");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3\xB3");
	printf("******  MENU  ******");
   	printf("\xB3\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
   	printf("\n 1)  THALI\n 2)  BEVERAGES And SHAKES\n 3)  PIZZA SPECIAL\n 4)  BURGER\n 5)  NOODLES\n 6)  SOUTH INDIAN\n 7)  SOUPS\n 8)  STARTERS\n 9)  MAIN COURSE (VEG N'NON-VEG)\n 10) BREAD AND RICE\n 11) DESERTS");
    printf("\n--------------------------------------\nPLEASE ENTER THE SERIAL NUMBER: ");
    scanf("%d",&serial_no);
    printf("\nNICE CHOICE ");
    FILE *p=fopen("Coustomer detail.txt","r");
    while(fscanf(p,"%s %s %s",mobile_Number,name,mailid)!=EOF)
    {
     printf("%s !!! :)",name);
    }
    fclose(p);
    printf("\nHEAD TOWARDS YOUR CHOICE\n");
    for(i=0;i<84;i++)
    {
    	delay(10000000);
    	printf("\xB2");
	}
	system("cls");
	switch(serial_no)
	{
		case 1:
			 THALI();
			 break; 
		case 2:
			 BEVERAGES_And_SHAKES();
		  	 break;
		case 3:
			 PIZZA_SPECIAL();
			 break;
		case 4:
		     BURGER();
			 break;
		case 5:
			 NOODLES();
		   	 break;
		case 6:
			 SOUTH_INDIAN();
			 break;
		case 7:
		     SOUPS();
		     break;
		case 8:
		     STARTERS();
		     break;
		case 9:
			 MAIN_COURSE();
			 break;
		case 10:
			 BREAD_AND_RICE();
			 break;
		case 11:
			 DESERTS();
			 break;		
		    	
	}
      
}
typedef struct item{
	char dish[40];
	float price;
}item;
void THALI()
{   
    system("cls");
    int number1,quantity1;
    char symbol1;
    float cost1;
	printf("\n\n\n\n     ");
	printf("THALI");
	printf("\n     ========================================================================\n");
	item a[3];
	strcpy(a[0].dish,"Mini_Thali");
	a[0].price=170.00;
	strcpy(a[1].dish,"Veg._Thali");
	a[1].price=200.00;
	strcpy(a[2].dish,"Special_Thali");
	a[2].price=250.00;
	printf("\n\n     1)  %s                                                   %.2f",a[0].dish,a[0].price);
	printf("\n         (Dal,Channa,Raita,3Roti)\n     _____________________________________________");
	printf("\n\n     2)  %s                                                   %.2f",a[1].dish,a[1].price);
	printf("\n         (Dal,Khadai Panner,2 Paratha,Salad,Papad)\n     _______________________________________________");
	printf("\n\n     3)  %s                                                %.2f",a[2].dish,a[2].price);
	printf("\n         (Dal,Khadai Panner,Channa,\n         Butter Nan,Jeera Rice,Raita,\n         Salad,papad,Ice Cream /Gulab Jamun)\n     _____________________________________________");
	back1:
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number1);
	if(number1>3)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back1;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity1);
	printf("\n     For adding more item press '+' For not press 'N'");
	scanf(" %c",&symbol1);
	cost1=(quantity1)*a[number1-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",a[number1-1].dish,quantity1,cost1);
	fclose(N);
	if(symbol1=='+')
	{
		goto back1;
	}
	  
}
void BEVERAGES_And_SHAKES()
{
	 system("cls");
    int number2,quantity2;
    char symbol2;
    float cost2;
	printf("\n\n\n\n     ");
	printf("BEVERAGES And SHAKES");
	printf("\n     ========================================================================\n");
	item b[10];
	strcpy(b[0].dish,"Cold_Drink");
	b[0].price=30.00;
	strcpy(b[1].dish,"Lime_Soda");
	b[1].price=40.00;
	strcpy(b[2].dish,"Express_Coffee");
	b[2].price=50.00;
	strcpy(b[3].dish,"Lassi(Sweet/salted)");
	b[3].price=50.00;
	strcpy(b[4].dish,"Orange_Juice");
	b[4].price=60.00;
	strcpy(b[5].dish,"Mango_Shake");
	b[5].price=65.00;
	strcpy(b[6].dish,"Pineapple_Shake");
	b[6].price=65.00;
	strcpy(b[7].dish,"Cold_Coffee");
	b[7].price=75.00;
	strcpy(b[8].dish,"Strawberry_Shake");
	b[8].price=95.00;
	strcpy(b[9].dish,"Chocolate_Shake");
	b[9].price=100.00;
	printf("\n\n     1)   %s                                                   %.2f",b[0].dish,b[0].price);
	printf("\n\n     2)   %s                                                    %.2f",b[1].dish,b[1].price);
	printf("\n\n     3)   %s                                               %.2f",b[2].dish,b[2].price);
	printf("\n\n     4)   %s                                          %.2f",b[3].dish,b[3].price);
	printf("\n\n     5)   %s                                                 %.2f",b[4].dish,b[4].price);
	printf("\n\n     6)   %s                                                  %.2f",b[5].dish,b[5].price);
	printf("\n\n     7)   %s                                              %.2f",b[6].dish,b[6].price);
	printf("\n\n     8)   %s                                                  %.2f",b[7].dish,b[7].price);
	printf("\n\n     9)   %s                                             %.2f",b[8].dish,b[8].price);
	printf("\n\n     10)  %s                                              %.2f",b[9].dish,b[9].price);
	back2:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number2);
	if(number2>10)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back2;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity2);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol2);
	cost2=(quantity2)*b[number2-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",b[number2-1].dish,quantity2,cost2);
	fclose(N);
	if(symbol2=='+')
	{
		goto back2;
	}	
}
void PIZZA_SPECIAL()
{
	 system("cls");
    int i,number3,quantity3;
    char symbol3;
    float cost3;
	printf("\n\n\n\n     ");
	printf("PIZZA SPECIAL");
	printf("\n     ========================================================================\n");
	item c[6];
	strcpy(c[0].dish,"Veg._Masala_Pizza");
	c[0].price=200.00;
	strcpy(c[1].dish,"Mix_Veg._Pizza");
	c[1].price=200.00;
	strcpy(c[2].dish,"Mushroom_Makhani_Pizza");
	c[2].price=210.00;
	strcpy(c[3].dish,"Cottege_Cheese_Makhani_Pizza");
	c[3].price=210.00;
	strcpy(c[4].dish,"Cheese_Chilly_Pizza");
	c[4].price=220.00;
	strcpy(c[5].dish,"Chicken_Pizza");
	c[5].price=250.00;
	printf("\n\n     1)   %s                                           %.2f",c[0].dish,c[0].price);
	printf("\n\n     2)   %s                                              %.2f",c[1].dish,c[1].price);
	printf("\n\n     3)   %s                                      %.2f",c[2].dish,c[2].price);
	printf("\n\n     4)   %s                                %.2f",c[3].dish,c[3].price);
	printf("\n\n     5)   %s                                         %.2f",c[4].dish,c[4].price);
	printf("\n\n     6)   %s                                               %.2f",c[5].dish,c[5].price);
	back3:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number3);
	if(number3>6)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back3;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity3);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol3);
	cost3=(quantity3)*c[number3-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",c[number3-1].dish,quantity3,cost3);
	fclose(N);
	if(symbol3=='+')
	{
		goto back3;
	}	
}
void BURGER()
{
	system("cls");
    int i,number4,quantity4;
    char symbol4;
    float cost4;
	printf("\n\n\n\n     ");
	printf("BURGER");
	printf("\n     ========================================================================\n");
	item d[4];
	strcpy(d[0].dish,"Veg._Burger");
	d[0].price=40.00;
	strcpy(d[1].dish,"Veg._Cheese_Burger");
	d[1].price=50.00;
	strcpy(d[2].dish,"cottege_Cheese_Burger");
	d[2].price=60.00;
	strcpy(d[3].dish,"Chicken_Burger");
	d[3].price=80.00;
	printf("\n\n     1)   %s                                                  %.2f",d[0].dish,d[0].price);
	printf("\n\n     2)   %s                                           %.2f",d[1].dish,d[1].price);
	printf("\n\n     3)   %s                                        %.2f",d[2].dish,d[2].price);
	printf("\n\n     4)   %s                                               %.2f",d[3].dish,d[3].price);
	back4:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number4);
	if(number4>4)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back4;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity4);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol4);
	cost4=(quantity4)*d[number4-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",d[number4-1].dish,quantity4,cost4);
	fclose(N);
	if(symbol4=='+')
	{
		goto back4;
	}
}
void NOODLES()
{
		system("cls");
    int i,number5,quantity5;
    char symbol5;
    float cost5;
	printf("\n\n\n\n     ");
	printf("NOODLES");
	printf("\n     ========================================================================\n");
	item e[4];
	strcpy(e[0].dish,"Veg._Noodles");
	e[0].price=40.00;
	strcpy(e[1].dish,"Veg._HongKong_Noodles");
	e[1].price=60.00;
	strcpy(e[2].dish,"Hakka_Noodles");
	e[2].price=70.00;
	strcpy(e[3].dish,"Chicken_Noodles");
	e[3].price=100.00;
	printf("\n\n     1)   %s                                                %.2f",e[0].dish,e[0].price);
	printf("\n\n     2)   %s                                       %.2f",e[1].dish,e[1].price);
	printf("\n\n     3)   %s                                               %.2f",e[2].dish,e[2].price);
	printf("\n\n     4)   %s                                             %.2f",e[3].dish,e[3].price);
	back5:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number5);
		if(number5>4)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back5;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity5);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol5);
	cost5=(quantity5)*e[number5-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",e[number5-1].dish,quantity5,cost5);
	fclose(N);
	if(symbol5=='+')
	{
		goto back5;
	}	
}
void SOUTH_INDIAN()
{
	system("cls");
    int i,number6,quantity6;
    char symbol6;
    float cost6;
	printf("\n\n\n\n     ");
	printf("SOUTH INDIAN");
	printf("\n     ========================================================================\n");
	item f[5];
	strcpy(f[0].dish,"Plain_Dosa");
	f[0].price=50.00;
	strcpy(f[1].dish,"Masala_Dosa");
	f[1].price=60.00;
	strcpy(f[2].dish,"Panner_Dosa");
	f[2].price=70.00;
	strcpy(f[3].dish,"Spring_Dosa");
	f[3].price=70.00;
	strcpy(f[4].dish,"Onion_Uttapam");
	f[4].price=70.00;
	printf("\n\n     1)   %s                                                   %.2f",f[0].dish,f[0].price);
	printf("\n\n     2)   %s                                                  %.2f",f[1].dish,f[1].price);
	printf("\n\n     3)   %s                                                  %.2f",f[2].dish,f[2].price);
	printf("\n\n     4)   %s                                                  %.2f",f[3].dish,f[3].price);
	printf("\n\n     5)   %s                                                %.2f",f[4].dish,f[4].price);
	back6:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number6);
	if(number6>5)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back6;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity6);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol6);
	cost6=(quantity6)*f[number6-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",f[number6-1].dish,quantity6,cost6);
	fclose(N);
	if(symbol6=='+')
	{
		goto back6;
	}		
}
void SOUPS()
{
		system("cls");
    int i,number7,quantity7;
    char symbol7;
    float cost7;
	printf("\n\n\n\n     ");
	printf("SOUPS");
	printf("\n     ========================================================================\n");
	item g[5];
	strcpy(g[0].dish,"Veg._Soup");
	g[0].price=65.00;
	strcpy(g[1].dish,"Tomato_Soup");
	g[1].price=65.00;
	strcpy(g[2].dish,"Hot_n_Sour");
	g[2].price=65.00;
	strcpy(g[3].dish,"Veg_Manchow_Soup");
	g[3].price=65.00;
	strcpy(g[4].dish,"Chicken_Soup");
	g[4].price=100.00;
	printf("\n\n     1)   %s                                                   %.2f",g[0].dish,g[0].price);
	printf("\n\n     2)   %s                                                 %.2f",g[1].dish,g[1].price);
	printf("\n\n     3)   %s                                                  %.2f",g[2].dish,g[2].price);
	printf("\n\n     4)   %s                                            %.2f",g[3].dish,g[3].price);
	printf("\n\n     5)   %s                                                %.2f",g[4].dish,g[4].price);
	back7:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number7);
		if(number7>5)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back7;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity7);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol7);
	cost7=(quantity7)*g[number7-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",g[number7-1].dish,quantity7,cost7);
	fclose(N);
	if(symbol7=='+')
	{
		goto back7;
	}	
}
void STARTERS()
{
	 system("cls");
    int i,number8,quantity8;
    char symbol8;
    float cost8;
	printf("\n\n\n\n     ");
	printf("STARTERS");
	printf("\n     ========================================================================\n");
	item h[8];
	strcpy(h[0].dish,"Veg._Spring_Roll");
	h[0].price=60.00;
	strcpy(h[1].dish,"French_Fries");
	h[1].price=80.00;
	strcpy(h[2].dish,"Cheese_Cutlet");
	h[2].price=80.00;
	strcpy(h[3].dish,"veg._Manchurian");
	h[3].price=80.00;
	strcpy(h[4].dish,"Panner_Pakora");
	h[4].price=100.00;
	strcpy(h[5].dish,"Panner_Chilly");
	h[5].price=120.00;
	strcpy(h[6].dish,"Chicken_Roll");
	h[6].price=120.00;
	strcpy(h[7].dish,"Chicken_Chilly");
	h[7].price=150.00;
	printf("\n\n     1)   %s                                             %.2f",h[0].dish,h[0].price);
	printf("\n\n     2)   %s                                                 %.2f",h[1].dish,h[1].price);
	printf("\n\n     3)   %s                                                %.2f",h[2].dish,h[2].price);
	printf("\n\n     4)   %s                                              %.2f",h[3].dish,h[3].price);
	printf("\n\n     5)   %s                                                %.2f",h[4].dish,h[4].price);
	printf("\n\n     6)   %s                                                %.2f",h[5].dish,h[5].price);
	printf("\n\n     7)   %s                                                 %.2f",h[6].dish,h[6].price);
	printf("\n\n     8)   %s                                               %.2f",h[7].dish,h[7].price);
	back8:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number8);
		if(number8>8)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back8;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity8);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol8);
	cost8=(quantity8)*h[number8-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",h[number8-1].dish,quantity8,cost8);
	fclose(N);
	if(symbol8=='+')
	{
		goto back8;
	}
}
void MAIN_COURSE()		
{
	system("cls");
    int i,number9,quantity9;
    char symbol9;
    float cost9;
	printf("\n\n\n\n     ");
	printf("MAIN COURSE");
	printf("\n     ========================================================================\n");
	item j[13];
	strcpy(j[0].dish,"Fry_Dal");
	j[0].price=60.00;
	strcpy(j[1].dish,"Mix_Veg.");
	j[1].price=100.00;
	strcpy(j[2].dish,"Jeera_Aloo");
	j[2].price=120.00;
	strcpy(j[3].dish,"Veg._Mushroom");
	j[3].price=140.00;
	strcpy(j[4].dish,"Kadhai_Panner");
	j[4].price=160.00;
	strcpy(j[5].dish,"Sahi_Panner");
	j[5].price=160.00;
	strcpy(j[6].dish,"Palak_panner");
	j[6].price=160.00;
	strcpy(j[7].dish,"Rajma");
	j[7].price=160.00;
	strcpy(j[8].dish,"Malai_Kofta");
	j[8].price=180.00;
	strcpy(j[9].dish,"Butter_Chicken");
	j[9].price=250.00;
	strcpy(j[10].dish,"Kadhai_Chicken");
	j[10].price=260.00;
	strcpy(j[11].dish,"Masala_Mutton");
	j[11].price=280.00;
	strcpy(j[12].dish,"Chicken_Korma");
	j[12].price=280.00;
	printf("\n\n     1)   %s                                                    %.2f",j[0].dish,j[0].price);
	printf("\n\n     2)   %s                                                   %.2f",j[1].dish,j[1].price);
	printf("\n\n     3)   %s                                                 %.2f",j[2].dish,j[2].price);
	printf("\n\n     4)   %s                                              %.2f",j[3].dish,j[3].price);
	printf("\n\n     5)   %s                                              %.2f",j[4].dish,j[4].price);
	printf("\n\n     6)   %s                                                %.2f",j[5].dish,j[5].price);
	printf("\n\n     7)   %s                                               %.2f",j[6].dish,j[6].price);
	printf("\n\n     8)   %s                                                      %.2f",j[7].dish,j[7].price);
	printf("\n\n     9)   %s                                                %.2f",j[8].dish,j[8].price);
	printf("\n\n     10)  %s                                             %.2f",j[9].dish,j[9].price);
	printf("\n\n     11)  %s                                             %.2f",j[10].dish,j[10].price);
	printf("\n\n     12)  %s                                              %.2f",j[11].dish,j[11].price);
	printf("\n\n     13)  %s                                              %.2f",j[12].dish,j[12].price);
	back9:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number9);
		if(number9>13)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back9;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity9);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol9);
	cost9=(quantity9)*j[number9-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",j[number9-1].dish,quantity9,cost9);
	fclose(N);
	if(symbol9=='+')
	{
		goto back9;
	}	
}
void BREAD_AND_RICE()
{
	 system("cls");
    int i,number10,quantity10;
    char symbol10;
    float cost10;
	printf("\n\n\n\n     ");
	printf("BREAD AND RICE");
	printf("\n     ========================================================================\n");
	item k[10];
	strcpy(k[0].dish,"Plain_Roti");
	k[0].price=08.00;
	strcpy(k[1].dish,"Tandoori_Roti");
	k[1].price=08.00;
	strcpy(k[2].dish,"Butter_Tandoori_Roti");
	k[2].price=10.00;
	strcpy(k[3].dish,"Missi_Roti");
	k[3].price=15.00;
	strcpy(k[4].dish,"Butter_Nan");
	k[4].price=25.00;
	strcpy(k[5].dish,"Stuffed_Nan");
	k[5].price=30.00;
	strcpy(k[6].dish,"Plain_Rice");
	k[6].price=50.00;
	strcpy(k[7].dish,"Jeera_Rice");
	k[7].price=70.00;
	strcpy(k[8].dish,"Briyani");
	k[8].price=80.00;
	strcpy(k[9].dish,"Chicken_Briyani");
	k[9].price=120.00;
	printf("\n\n     1)   %s                                                   %.2f",k[0].dish,k[0].price);
	printf("\n\n     2)   %s                                                %.2f",k[1].dish,k[1].price);
	printf("\n\n     3)   %s                                        %.2f",k[2].dish,k[2].price);
	printf("\n\n     4)   %s                                                  %.2f",k[3].dish,k[3].price);
	printf("\n\n     5)   %s                                                  %.2f",k[4].dish,k[4].price);
	printf("\n\n     6)   %s                                                 %.2f",k[5].dish,k[5].price);
	printf("\n\n     7)   %s                                                  %.2f",k[6].dish,k[6].price);
	printf("\n\n     8)   %s                                                  %.2f",k[7].dish,k[7].price);
	printf("\n\n     9)   %s                                                     %.2f",k[8].dish,k[8].price);
	printf("\n\n     10)  %s                                            %.2f",k[9].dish,k[9].price);
	back10:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number10);
		if(number10>10)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back10;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity10);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol10);
	cost10=(quantity10)*k[number10-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f\n",k[number10-1].dish,quantity10,cost10);
	fclose(N);
	if(symbol10=='+')
	{
		goto back10;
	}	
}
void DESERTS()
{
	system("cls");
    int i,number11,quantity11;
    char symbol11;
    float cost11;
	printf("\n\n\n\n     ");
	printf("DESERTS");
	printf("\n     ========================================================================\n");
	item l[6];
	strcpy(l[0].dish,"Gulab_Jamun");
	l[0].price=40.00;
	strcpy(l[1].dish,"Ice_Cream");
	l[1].price=50.00;
	strcpy(l[2].dish,"Faluda");
	l[2].price=60.00;
	strcpy(l[3].dish,"Matka_Kulfi");
	l[3].price=60.00;
	printf("\n\n     1)   %s                                                %.2f",l[0].dish,l[0].price);
	printf("\n\n     2)   %s                                                  %.2f",l[1].dish,l[1].price);
	printf("\n\n     3)   %s                                                     %.2f",l[2].dish,l[2].price);
	printf("\n\n     4)   %s                                                %.2f",l[3].dish,l[3].price);
	back11:
	printf("\n     -------------------------------------------------------------------------");
	printf("\n\n     Please enter your choice number:");
	scanf("%d",&number11);
	if(number11>4)
	{
		printf("\n     No such type Choice Available Try Again");
		goto back11;
	}
	printf("\n     Please enter quantity:");
	scanf("%d",&quantity11);
	printf("\n     For adding more item press '+' For not press 'N':");
	scanf(" %c",&symbol11);
	cost11=(quantity11)*l[number11-1].price;
	FILE *N;
    N=fopen("Order_Details.txt","a");
	fprintf(N,"%s %d %f",l[number11-1].dish,quantity11,cost11);
	fclose(N);
	if(symbol11=='+')
	{
		goto back11;
	}
}			
void order()
{ 
    float sum=0;
	float gst;
	float total;
	char name[30];
    char mobile_Number[10];
    char mailid[50];  
    system("color 0E");
	printf("\n\n\n\n     ");
	printf("Order");
	printf("\n     ========================================================================\n");
	FILE *N;
	N=fopen("Order_Details.txt","r");
	char dish[40];
	int quant;
	float price;
	while(fscanf(N,"%s %d %f",dish,&quant,&price)!=EOF)
	{
	sum=sum+price;	
	printf("\n     *  %s\n         Quantity-%d   Price-%.2f",dish,quant,price);
	}
	printf("\n     -------------------------------------------------------------------------\n");
	gst=(sum*5)/100;
	total=sum+gst;
	printf("\n           GST-%.2f\n           Total-%.2f\n\n",gst,total);
	fclose(N);
	printf("            ");
	FILE *p=fopen("Coustomer detail.txt","r");
    while(fscanf(p,"%s %s %s",mobile_Number,name,mailid)!=EOF)
    {
     printf(" Thanku %s Please Visit Again !!! :)",name);
    }
	getch();

}
