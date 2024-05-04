

#include <stdio.h>

int main(int argc, char **argv)
{
 	int  numb, i;
	char  type;
	
	printf("+----------------------+\n");
	printf("Loop application STARTED\n");
	printf("+----------------------+\n\n");
	
	do{
	printf("\nD = do/while | W = while | F = for | Q = quit\n");
	printf("Enter loop type and the number of times to iterate (Quit=Q0):");
	scanf(" %c%d",&type,&numb);
	
		if (type == 'D' && (numb >= 3 && numb <= 20)){
			printf("\nDO-WHiLE:");
			for(i = 0; i < numb ; i++){
				printf("%c",type);
			}	
		}
		else if (type == 'W' && (numb >= 3 && numb <= 20) ){
			printf("\nWHiLE:");
			for(i = 0; i<numb ; i++){
				printf("%c",type);
			}	
		}
		else if (type == 'F' && (numb >= 3 && numb <= 20 )){
			printf("\nFor:");
			for(i = 0; i <numb ; i++){
				printf("%c",type);
			}
		}
		else if (type== 'Q' && numb != 0){
			printf("ERROR: To quit, the number of iterations should be 0!");
		}
		else if (type == 'Q' && numb==0){
				break;
		}
		else if(numb < 3 || numb > 20){ 
			printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
		}
		else if(type != 'D' || type != 'W' ||type != 'F' ){ 
			printf("ERROR: Invalid entered value(s)!\n");
		}
	}
	
	while(type != 'Q' || numb != 0);
	
	
	
	return 0;
}

