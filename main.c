#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{   
    int choice;
	float kh,pound,vietname,chinese,Nwland,Malay,Taiwan,cannada,Australia,singapore,Euro,Yen,Hongkong,Thai,philippine,US;
    float result;
    US = 4055.00;
    chinese=637.02;
    pound=5356.28;
    vietname = 0.8;
    Euro = 4467.01;
    Nwland=2822.71;
    philippine=77.75;
    Yen=33.22;
    Malay=959.48;
    Thai=120.72;
    Taiwan=141.31;
    cannada=3242.58;
    Australia=3048.45;
    singapore=2988.58;
    Hongkong=517.99;
    a:
	printf("\n\n\n\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1B1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    printf("\n\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB2\xB2     Power By: CHOU CHAMNAN    \xB2\xB2\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    printf("\n\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    printf("\n\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB2\xB2  FOREIGN CURENCY EXCHANG RATE \xB2\xB2\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    printf("\n\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    printf("\n\n\n\t\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF");
    printf("\n\t\xB3 1.Pound\t\t\t2.Chinese\t\t\t3.New Zealand \xB3");
    printf("\n\t\xB3 4.Malaysia\t\t\t5.Taiwan\t\t\t6.Cannada     \xB3");
    printf("\n\t\xB3 7.Australia\t\t\t8.Singapore\t\t\t9.Euro        \xB3");
    printf("\n\t\xB3 10.Jappen\t\t\t11.Hong kong\t\t\t12.Thai       \xB3");
    printf("\n\t\xB3 13.Vietnam\t\t\t14.Philippines\t\t\t15.US         \xB3");
    
    printf("\n\t\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9");
    printf("\n\n\tEnter Your Chioce: ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t1.Pound");
    		printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = kh*pound;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 2:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of Yuan Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t2.Chinese");
			printf("\n\tSell Out Yuan: ");scanf("%f",&kh);
    		result = chinese*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 3:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t3.New zealand");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Nwland*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 4:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t4.Malaysia");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Malay*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 5:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t5.Taiwan");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Taiwan*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 6:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t6.Cannadian");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = cannada*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 7:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t7.Australia");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Australia*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 8:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t8.Singapore");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = singapore*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 9:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t9.Euro");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Euro*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 10:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t10.Jappen");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Yen*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 11:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t11.Hong kong");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Hongkong*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 12:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t12.Thai");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = Thai*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 13:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t13.Vietnamese");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = vietname*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 14:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t14.Philippines");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result = philippine*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	case 15:
    		printf("\n\n\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Type of dollar Tranfer to kh \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
    		printf("\t15.US");
			printf("\n\tSell Out $: ");scanf("%f",&kh);
    		result =  US*kh;
    		printf("\n\tRiel(KH): %f",result);
    		goto a;
    		break;
    	default:
    		printf("\tInvallid choice!!");
    		break;
	}
	getch();
	return 0;
}
