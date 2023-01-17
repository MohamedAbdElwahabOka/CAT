#include <stdio.h>

int main(){
int i,j;
/******ears******/
for(i=1;i<=8;i++){

    for(j=1;j<8;j++){
        printf(" ");
        
    }
    
    for(j=7;j>=i;j--){
     printf(" ");
     
    }
    
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
     //////
   
    for(j=1;j<20;j++){
        printf(" ");
    }
    for(j=1;j<8;j++){
        if(j<=8-i)
        printf(" ");
    }
    for(j=7;j>=i;j--){
     printf(" ");
     
    }
    for(j=1;j<=2*i-1;j++){
        printf("*");
    }
    printf("\n");
}
/*****face_1*******/
  for(i = 5;i >= 1;i--){
      if(i<1)
      break;
      for(j = 0; j < 33;j++){
          if(i>j )
             printf(" ");
          
         else{
             printf("*");
           
             }
    
       }
 for (j = 29; j > 1; j--)
		{
			if (j <= i )
			printf(" ");
			else
			{
				printf("*");
			}
		}
 printf("\n");
 
      
 }
/*****face_2*******/

for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j < 62; j++)
		{
			if (i == 3 && (j == 16 || j == 17 || j == 23 || j == 24 || j == 43 || j == 44 || j == 50 || j == 51) 
			|| i == 4 && (j == 17 || j == 18 || j == 22 || j == 23 || j == 44 || j == 45 || j == 49 || j == 50))
			{
				printf(" ");
				  if(i>j && (j==12 && i==2)||(j==11 && i==2)||(j==12 && i==2)|| ( j==13 && i == 2) || ( j==14 && i == 2))
             printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
/*****face_3*******/
	
	
	
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j <= 33; j++)
		{
			if (i > j || (i == 1 && ( j == 29 || j == 30 || j == 31 || j == 32 || j == 33)) 
			|| (i == 2 && (j == 30 || j == 31 || j == 32 || j == 33)) || (i == 3 && (j == 31 ||j == 32 ) ||
			(i == 4 && (j == 31 ||j == 32  || j == 10 || j == 24  )||	(i == 5 && (j == 9 ||j == 24 ||j == 29 ) 
			|| (i == 6 && (j == 8 ||j == 25 ||j == 26 ||j == 27 ||j == 28)) || (i == 7 && (j == 7 ))
			|| (i == 8 && (j == 6 )) || (i == 9 && (j == 5 ))))))
			printf(" ");
			else
			{
				printf("*");
			}
		}
		for (int j = 28; j > 1; j--)
		{
			if (j <= i ||(i == 1 && (j ==28 )) || (i == 4 && (j==11 || j == 23 )
			|| (i == 5 && (j == 23 || j == 10 ||j==28 )) || (i == 6 && ( j == 9 ||j == 24 ||j == 25 ||j == 26 ||j == 27))
			|| (i == 7 && (j ==8 )) || (i == 8 && (j == 5 ))
			))
				printf(" ");
			else
			{
				printf("*");
			}
		}
		printf("\n");

	}

printf("         *              Hager Ashraf               *");
printf("\n\n");
printf("         *            Dr.Esraa El-hariri           *");
 

    return 0;
}
