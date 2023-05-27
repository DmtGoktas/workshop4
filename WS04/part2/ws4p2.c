/*

 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int apple, orange, pear, tomato, cabbag;
	int a, o, p, t, c, flag = 1;
	
	
do{	
	puts("Grocery Shopping");
	puts("================");
	
	
	do{
		printf("How many APPLES do you need? :");
		scanf("%d", &apple);
		if(apple < 0)
			printf("ERROR: Value must be 0 or more.\n");
	} while(apple < 0);
	printf("\n");
	
	do{

		printf("How many ORANGES do you need? :");
		scanf("%d", &orange);
		if(orange < 0)
			printf("ERROR: Value must be 0 or more.\n");
	} while(orange < 0);
		printf("\n");
	
	do{
		printf("How many PEARS do you need? :");
		scanf("%d", &pear);
		if(pear < 0)
			printf("ERROR: Value must be 0 or more.\n");		
	} while(pear < 0);
	printf("\n");

	do{
		printf("How many TOMATOES do you need? :");
		scanf("%d", &tomato);
		if(tomato < 0)
			printf("ERROR: Value must be 0 or more.\n");
	} while(tomato < 0);
	printf("\n");
	
	do{
		printf("How many CABBAGES do you need? :");
		scanf("%d", &cabbag);
		if(cabbag < 0)
			printf("ERROR: Value must be 0 or more.\n");
	} while(cabbag < 0);

	printf("\n");
	printf("--------------------------\n");
	printf("Time to pick the products!\n");
	printf("--------------------------\n");

		if(apple != 0)
		{
			do{
				printf("Pick some APPLES... how many did yo pick? : ");
				scanf("%d", &a);
				//~ if( a > 0 && apple == a)
				//~ {
					//~ printf("Great, that's the apples done!");
					//~ printf("\n");
				//~ }
				 if( a > 0 && a > apple)
				{
					printf("You picked too many...only %d more APPLE(S) are needed.\n",apple);
				}
				
				else if ( a <= 0 )
				{
					printf("ERROR: You must pick at least 1!\n");
				}
				else
				{
					apple -= a;
					if(apple != 0)
					{
						printf("Looks like we still need some APPLES...\n");
					}
					
				}
			}while(apple != 0);
			printf("Great, that's the apples done!");
			printf("\n\n");
		}
		
		if(orange != 0)
		{
			do{
				
				printf("Pick some ORANGES... how many did yo pick? : ");
				scanf("%d", &o);
				//~ if(o > 0 && orange == c)
				//~ {
					//~ printf("Great, that's the cabbages done!\n");
				//~ }
				 if(o > 0 && o > orange)
				{
					printf("You picked too many...only %d more ORANGE(S) are needed.\n",orange);
				}
				
				else if ( o <= 0 )
				{
					printf("ERROR: You must pick at least 1!\n");
				}
				else
				{
					orange -= o;
					if(apple != 0)
					{
					printf("Looks like we still need some ORANGES...\n");
					}
				}	
			}while(0 != orange);
		printf("Great, that's the oranges done!");
		printf("\n\n");
		}
		
		if(pear != 0)
		{
			do{
				printf("Pick some PEARS... how many did yo pick? :");
				scanf("%d", &p);
				//~ if(p > 0 && pear == p)
				//~ {
					//~ printf("Great, that's the pears done!\n");
				//~ }
				 if(p > 0 && p > pear)
				{
					printf("You picked too many...only %d more PEAR(S) are needed.\n",pear);
				}
				
				else if ( p <= 0 )
				{
					printf("ERROR: You must pick at least 1!\n");
				}
				
				else
				{
					pear -= p;
					if(pear != 0)
					{
					printf("Looks like we still need some PEARS...\n");
					}
				}		
			}while(pear != 0);
		printf("Great, that's the pears done!");
		printf("\n\n");
		}
		
		if(tomato != 0)
		{
			do{
				
				printf("Pick some TOMATOES... how many did yo pick? : ");
				scanf("%d", &t);
				//~ if(t > 0 && tomato == t)
				//~ {
					//~ printf("Great, that's the tomatoes done!\n");
				//~ }
				 if(t > 0 && t > tomato)
				{
					printf("You picked too many...only %d more TOMATOE(S) are needed.\n",tomato);
				}
				
				else if ( t <= 0 )
				{
					printf("ERROR: You must pick at least 1!\n");
				}
				else
				{
					tomato -= t;
					if(tomato != 0)
					{
					printf("Looks like we still need some TOMATOES...\n");
					}
				}	
			}while(0 != tomato);
		printf("Great, that's the tomatoes done!");
		printf("\n\n");
		}
		
		if(cabbag != 0)
		{
			do{
				
				printf("Pick some CABBAGES... how many did yo pick? : ");
				scanf("%d", &c);
				//~ if(c > 0 && cabbag == c)
				//~ {
					//~ printf("Great, that's the cabbages done!\n");
				//~ }
				 if(c > 0 && c > cabbag)
				{
					printf("You picked too many...only %d more CABBAGE(S) are needed.\n",cabbag);
				}
				
				else if ( c <= 0 )
				{
					printf("ERROR: You must pick at least 1!\n");
				}
				else
				{
					cabbag -= c;
					if(cabbag != 0)
					{
					printf("Looks like we still need some CABBAGES...\n");
					}
				}	
			}while(0 != cabbag);
			
		printf("Great, that's the cabbages done!");
		printf("\n\n");
		}	
		
		puts("All the items are picked!\n");
		printf("Do another shopping? (0 = NO): ");
		printf("\n");
		scanf("%d",&flag);

}while(flag != 0);

	printf("\nYour tasks are done for today - enjoy your free time!");

	return 0;
}

