//Write a C program to determine whether a person is allowed to cast a vote. Display an appropriate message based on the given details.
#include <stdio.h>

int main (){
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if(age >= 18)
    {
        int voterCard;
        printf("If you have voter card then give input as 1 or else give 0 ->");
        scanf("%d",&voterCard);
        if(voterCard == 1 && )
        {
           int alreadyVote;
           printf("If you already vote then give input has 1 or else give 0 ->");
           scanf("%d",&alreadyVote);
           if(alreadyVote == 0)
           {
               int valid_photo_id;
               printf("If you have a valid photo id then give input has 1 or else give 0 ->");
               scanf("%d",&valid_photo_id);
               //if the photo id and voter id has same name then give input as 1 or else give input as 0
               int same_Name;
               
               if(valid_photo_id == 1)
               {
               printf("Photo id and votercard matched, Now you can vote!!\n");
               }
               else
               {
              printf("Valid Photo id is required\n");
               }
            }
            else
            {
             printf("You can't vote again...\n");
            }
        }
        else
        {
            printf("Sorry, You need to apply for the voter card..\n");
        }
    }
    else
    {
        printf("You are not allow to Vote, You must be at least 18 years old to vote. \n");   
    }
    
    
    return 0;
}