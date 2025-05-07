//Emmanuel Garcia
//04-22-2025
//Project 10
//Word of the day!

#include <stdio.h>
#define GUESS "mystery.txt"
#define WORD 6
#define GUESSrows 6
#define GUESScolumns 6
#define WOWZ 6


int main(){
	char test1, test2;
	char mistery[WORD];
	char CORRECTION[WOWZ];
	char attempts[GUESSrows][GUESScolumns];
	FILE* GUESSpointer = fopen(GUESS, "r");
	if(GUESSpointer == NULL){
		printf("owari da...");
	}
	else{
		fscanf(GUESSpointer, "%s", mistery);
		fclose(GUESSpointer);
		
		//asking the user for guesses
		for(int counter = 0; counter < 5; counter++){
			printf("GUESS %d! Enter your guess: ", counter + 1);
			scanf("%s", &attempts[counter]);
		//end of asking the user for guesses
			
			//converting capitals to undercase letters
			for(int counter3 = 0; counter3 < 6; counter3++){
				for(int counter4 = 0; counter4 < 6; counter4++){
					if(attempts[counter3][counter4] >= 65 && attempts[counter3][counter4] <= 90){
						attempts[counter3][counter4] += 32;
					}
				}	
			}
			//end of converting capitals to undercase letters
			
			//cheking to see if the the letters were guessed correctly
			for(int counter3 = 0; counter3 < 6; counter3++){
				for(int counter4 = 0; counter4 < 6; counter4++){
					test1 = attempts[counter3][counter4];			
					if(test1 == mistery[counter3]){
						test1 = test1 - 32;	
					printf("%c", test1);
					}
				}	
			}
			//end of checking to see if the letters were guessed correctly
			
			//printing the guesses
			printf("================================");
			for(int counter2 = 0; counter2 < counter + 1; counter2++){
				printf("\n%s\n", attempts[counter2]);
				
			}
			//end of printing the guesses
		}
		
		

	}
	return 0;
}




