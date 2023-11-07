#include<stdio.h>

int main()
{
		printf("1 : hindi\n");
		printf("2 : english\n");
		printf("3 : gujarati\n");
		int l;
		printf("choose your language :");
		scanf("%d",&l);
		

		switch(l)
		{
				
			case 1 : printf("hindi\n\n");
		
			printf("A : Network problem\n");
			printf("B : call error\n");
			printf("C : Recharge\n");
			printf("D : Slow network\n\n ");
			int enter;
			printf("aapki problem kya hai ?");
		    scanf("%d",&enter);
			switch(enter);
			{
				printf("choise your problem ?");
		   		 scanf("%d",&enter);
				case 4 :printf("A : Network problem\n");
			            printf("1 :Network issue\n");
						printf("2 :Network slow \n");
						printf("3 :Roaming problem\n\n");
				switch(enter)
				{
					case 8 : printf("1 :Network issue\n");
					case 9 : printf("2 :Network slow \n");
					case 11: printf("3 :Roaming problem\n\n");
				}
				break;
				case 5 :printf("B : call error");
				break;
				case 6 :printf("C : Recharge");
				break;
				case 7 :printf("D : Slow network ");
				break;
			
			}
			
			
			break;
			case 2 : printf("english");
			break;
			case 3 : printf("gujarati");
			break;
			
		}
}