#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main() {
	while(1){
		system("cls");
		 printf(" #######  Password Strenght Checker By Krishna Dubey #######\n\n\n\n");
		 
		 		FILE *ptr=fopen("passstrenght.txt","a+");
		if(ptr==NULL){
		 
		  printf("\n\nMemory not Allocallted\n\n") ;
		  exit(1);
		  
		  }
		 printf("\n----------------------------:-------------------------------\n\n");
		 	 fprintf(ptr,"\n------------------------------------------------------------\n\n");
       
		char name[100];
		char ph_no[70];
		char password[100];
		int pass_len=0;
		int len=0;
		int smallL=0;
		int capL=0;
		int digit=0;
		int symbol=0;

		  printf("Enter your name : ");
        scanf("%s", name);
        printf("\n\n");
        fprintf(ptr, "Name of user: %s \n\n", name);

        printf("Enter your ph_no: ");
        scanf("%s", ph_no);
        printf("\n\n");
        fprintf(ptr, "Phone no of user: %s \n\n", ph_no);
        
             printf("Enter your password for strenght cheaking no space: ");
        scanf("%s", password);
        printf("\n\n");
        fprintf(ptr, "Password of user: %s \n\n", password);
        
        //for lenght of password for loop
        
        pass_len=strlen(password);
        
              
        fprintf(ptr, "Lenght of Password : %s \n\n", password);
        
        	if(pass_len>8){
        		len++;
        		
        		
        		}
        for (int i=0;i<pass_len;i++){
        	
        	
        	 if(islower(password[i])){
        		
        		smallL++;
        		}	
        		
        else	if(isupper(password[i])){
        		
        		capL++;
        		}	
        		
       else if(isdigit(password[i])){
       	digit++;
       	
       	
       }
       else{
        		
        		symbol++;
        		
        		}
        		
        	
        }
        
        
printf("\n------------------------------------------------------------\n\n");
        
fprintf(ptr,"\n------------------------------------------------------------\n\n");

       
		printf("\n\nNo Of Small Letter In Pass:- %d",smallL);
		printf("\n\nNo Of Capital Letter In Pass:- %d",capL);
		printf("\n\nNo Of Digit In Pass:- %d",digit);
		printf("\n\nNo Of Symbol In Pass:-%d",symbol);
		printf("\n\nThe Lenght Of The Pass:- %d",len);
		
		
		
		
		
		      
		fprintf(ptr,"\n\nNo Of Small Letter In Pass:- %d",smallL);
		fprintf(ptr,"\n\nNo Of Capital Letter In Pass:- %d",capL);
		fprintf(ptr,"\n\nNo Of Digit In Pass:- %d",digit);
		fprintf(ptr,"\n\nNo Of Symbol In Pass:-%d",symbol);
		fprintf(ptr,"\n\nThe Lenght Of The Pass:- %d",len);
		
		printf("\n\n------------------------------------------------------------\n\n");
		fprintf(ptr,"\n\n------------------------------------------------------------\n\n");
		if(len==0){
			
	printf("\n\n\n\n\nplease increse lenght of pass!\n");
		fprintf(ptr,"\n\n\n\n\nplease increse lenght of pass!\n");}
			
		if(capL==0){
			
	printf("\n\nplease Add atleast 1 capital letter in pass!\n");
	
		fprintf(ptr,"\n\nplease Add atleast 1 capital letter in pass!\n");
	
	}
	
		
		if(smallL==0){
			
	printf("\n\nplease Add atleast 1 sma letter in pass!\n");
	
		fprintf(ptr,"\n\nplease Add atleast 1 sma letter in pass!\n");
	
	}
	
		
		if(digit==0){
			
	printf("\n\nplease add atleast 1 digit in your pass!\n");
	
		fprintf(ptr,"\n\nplease add atleast 1 digit in your pass!\n");
	
	}
	
		
		if(symbol==0){
			
	printf("\n\nplease add atleast 1 symbol in your pass!\n");
		fprintf(ptr,"\n\nplease add atleast 1 symbol in your pass!\n");
	}
		
		printf("\n\n------------------------------------------------------------\n\n");
		
			
		fprintf(ptr,"\n\n------------------------------------------------------------\n\n");
       
	if(len==0|| smallL==0||capL==0||digit==0||symbol==0){
		 printf("\n\n\n Password is not secure !\n\n\n");
		 fprintf(ptr,"\n\n\n Password is not secure !\n\n\n");
		 
		 }	
     else{
     	printf("\n\n\n Password is secure You can use this as a Passwoird");
     	  	fprintf(ptr,"\n\n\n Password is secure You can use this as a Passwoird");
     	
     	fclose(ptr);
     }
		
		
		printf("\n\n------------------------------------------------------------\n\n");
		
		
		
		
		
			fprintf(ptr,"\n\n------------------------------------------------------------\n\n\n\n\n\n\n");
			fclose(ptr);
       
		
		        int choise;
        printf("\nDo you want to Exit (1 .y/ 2.n) " );
        scanf("%d",&choise); 
        printf("\n\n");
        
        if(choise==2 ){
        
        	
        	break;
        }
		
		
	}
	
	
return 0;}