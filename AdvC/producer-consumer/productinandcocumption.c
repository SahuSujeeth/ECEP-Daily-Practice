#include <stdio.h>
int capacity = 10;
int availabilityItems;
void produce()
{
    if(availabilityItems == capacity)
    {
        printf("Storage Full! Consumer must consume before producing again.\n");
        return; 
    }
    else if(availabilityItems < capacity)
    {
        availabilityItems++;
        printf("Item pproduced\n");
        printf("Available items %d\n",availabilityItems);
        return;
    }
}
void consume()
{
    if(availabilityItems != 0)
    {
        availabilityItems--;
        printf("Item consumed.\n");
        printf("Available items %d\n",availabilityItems);
        return;
    }
    else
    {
        printf("No items available for consumption.You can add for to consume\n");
        return;   
    }
}
void DispalyAvaiableItems()
{
    printf("Available items %d\n",availabilityItems);
    
}
int toExit()
{
   return 0;
}
int main ()
{
    
    printf("Produce \n");//Enter choice 1 to produce
    printf("Consume\n");//Enter choice 2 to consume
    printf("Dispaly items\n");//Enter choice 3 to Display items
    printf("to exit\n");//Enter chice 4 to Exit.
    
    int choice;
    while(1)
    {
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
       produce();
       break;
      case 2:
       consume();
       break;
      case 3:
       DispalyAvaiableItems();
       break;
        case 4:
       toExit();
       return 0;
       break;
       default : 
        printf("Invalid choice\n");
    }
    }
    
    return 0;
}