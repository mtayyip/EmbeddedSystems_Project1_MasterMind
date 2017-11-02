#include <stdio.h>
#include <stdlib.h>

int main()
{
	int guess[4],flag[4],target[4],RLed=0,WLed=0,i,j,random,in0,in1,in2,in3;
	int secret_alternatives[][4] = {{1, 2, 3, 4}, 
									{4, 5, 5, 2}, 
									{7, 7, 6, 6}, 
									{3, 2, 2, 2}, 
									{1, 7, 1, 2}, 
									{4, 4, 7, 6}, 
									{7, 3, 6, 1}};	
	
	printf("Random number:");scanf("%d",&random);random=random%7;								
	printf("Guess 1:");scanf("%d",&in0);
	printf("Guess 2:");scanf("%d",&in1);
	printf("Guess 3:");scanf("%d",&in2);
	printf("Guess 4:");scanf("%d",&in3);	
	
	
	flag[0]=0;
	flag[1]=0;
	flag[2]=0;
	flag[3]=0;
	
	guess[0]=in0;
	guess[1]=in1;
	guess[2]=in2;
	guess[3]=in3;
		
	target[0]=secret_alternatives[random][0];
	target[1]=secret_alternatives[random][1];
	target[2]=secret_alternatives[random][2];
	target[3]=secret_alternatives[random][3];
	
	
	for(j=0;j<4;j++){		
		if(target[j]==guess[j]){
			RLed++;
			flag[j]=1;}}
	
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(flag[i]==0 && flag[j]==0 && target[i]==guess[j] ){
				WLed++;
				flag[j]=1;}}}
					
	printf("\nRLED==%d \nWLED==%d \n",RLed,WLed);
		
	return 0;
}
