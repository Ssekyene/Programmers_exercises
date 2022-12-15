#include<stdio.h>
void main_opt();


int main ()
{
	int opt_main;
	int next_opt;
	int back_to_main;
	
	main_opt();
	// prompt for user option
	scanf("%d",&opt_main);
	
	
	// option menus
	switch(opt_main)
	{
		
		//main-send money option
		case 1:
			printf("Send Money\n");
			printf("1.Airtel and other number\n");
			printf("2.MTN number\n");
			printf("3.UTL number\n");
			printf("4.International Transfer\n");
			printf("\n");
			printf("0. Back 00.Main Menu\n");	  		
			scanf("%d", &back_to_main); 
			break;
	
			
			
	
			  
		// main-Airtime / Bundles	  
		case 2:
			printf("Airtime / Bundles\n");
			printf("1.Buy Airtime\n");
			printf("2.Buy Data Bundles(Offers inside)\n");
			printf("3.Buy Voice Bundles\n");
			printf("4.IControl\n");
			printf("\n");
			printf("0.Back 00.Main Menu\n");
			scanf("%d");	  		
		break;	  
			  
		// main-Withdraw cash	  
		case 3:
			printf("Enter amount\n");
			printf("\n");
			printf("0.Back 00.Main Menu\n");
			scanf("%d");	  		
		break;	  	  
			  
		//main-Pay Bill	  
		case 4:
			printf("Pay Bill\n");
			printf("1.UMEME TouchPay\n");
			printf("2.Water\n");
			printf("3.Pay TV\n");
			printf("4.Pay Solar\n");
			printf("5.UEDCL\n");
			printf("6.WENRECO\n");
			printf("7.URA\n");
			printf("8.Airtel Business\n");
			printf("9.Others\n");
			printf("10.UNRA Toll\n");
			scanf("%d");	  		
		break;	  
	 		  
			   
	} 
	
	return(0);
}

     // main menu

	void main_opt(int opt)
	{
	
		printf("1.Send money\n");
		printf("2.Airtime/Bundles\n");
		printf("3.Withdraw cash\n");
		printf("4.Pay Bill\n");
		printf("5.Payments\n");
		printf("6.School Fees\n");
		printf("7.Financial services\n");
		printf("8.Wewole\n");
		printf("9.AirtelMoney Pay\n");
		printf("10.My account\n");
		
	}