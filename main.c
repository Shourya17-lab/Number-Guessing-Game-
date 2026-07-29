#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int n=0,p=1;
    int random_num=(rand()%100)+1;
    printf("This is a number guessing game \nThe number will be between 1 and 100 \n");
    for (int i = 1; p=1; i++)
    {
        printf("Enter your guess :\n ");
        scanf("%d",&n);
        if(n>random_num){
            printf("Lower number please \n");
        }
        else if(n<random_num){
            printf("Higher number please\n");
        }
        else
        {
            printf("Congratulations you have guessed the number in %d guesses\n",i);
            printf("Enter 1 to play again or 0 to exit \n");
            scanf("%d",&p);
            if(p==0){
                break;
            }
            else{
                srand(time(0));
                random_num=(rand()%100)+1;
                i=0;
            }
        }
         
    }
    
    return 0;
}
