/*assignment 2 ice cream*/

/*note: for this program to run perfectly I would add event handling code to limit user input to what we need
like insuring they input the right flavours not inputing peanut butter flavour instead of the available flavours we have for example and asking the user to only input
numbers in vanilla sales for example with only 2 decimal places*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

enum flavours{vanilla,chocolate,mint,strawberry};/*initializing enum for flavours availible*/
float corner1sales[4];/*initializing an array for sales of corner 1 */
float corner2sales[4];/*initializing an array for sales of corner 2*/
/*the next 5 lines are for initializing variables for the summation of vanilla, chocolate, mint and strawberry sales respectively with the last line being the total of all the sums */
float sumV;
float sumC;
float sumM;
float sumS;
float Total_sum;

int main()
{

   char van [9];  /*initializing character arraye van, holds 9 characters*/
   printf("Enter ice cream flavour #1:\n");/*printf function used to tell user to input flavour 1 of the ice cream*/
   fgets(van,9,stdin);/*fgets function used to take user input, string only, and save it in character array van*/

   char choc [11];  /*initializing character array choc, holds 11 characters*/
   printf("Enter ice cream flavour #2:\n");/*printf function used to tell user to input flavour 2 of the ice cream*/
   fgets(choc,11,stdin);/*fgets function used to take user input, string only, and save it in character array choc*/

char mnt [6];  /*initializing character array mnt, holds 6 characters*/
   printf("Enter ice cream flavour #3:\n");/*printf function used to tell user to input flavour 3 of the ice cream*/
   fgets(mnt,6,stdin);/*fgets function used to take user input, string only, and save it in character array mnt*/

char strb [12];  /*initializing character array strb, holds 12 characters*/
   printf("Enter ice cream flavour #4:\n");/*printf function used to tell user to input flavour 4 of the ice cream*/
   fgets(strb,12,stdin);/*fgets function used to take user input, string only, and save it in character array strb*/

   enum flavours index;/*Using enum values as indices to access the array*/


   /*the following 8 lines are printf functions telling the user to enter the sales of each individual ice cream flavour in corner 1 and scanf functions to recieve decimal input of user and stores it to
   each specific index*/
   printf("Enter corner 1 sales of vanilla:\n");
   scanf("%f",&corner1sales[vanilla]);
   printf("Enter corner 1 sales of chocolate:\n");
   scanf("%f",&corner1sales[chocolate]);
   printf("Enter corner 1 sales of mint:\n");
   scanf("%f",&corner1sales[mint]);
   printf("Enter corner 1 sales of strawberry:\n");
   scanf("%f",&corner1sales[strawberry]);

/*the following 8 lines are printf functions telling the user to enter the sales of each individual ice cream flavour in corner 2 and scanf functions to recieve decimal input of user and stores it to
   each specific index*/
   printf("Enter corner 2 sales of vanilla:\n");
   scanf("%f",&corner2sales[vanilla]);
   printf("Enter corner 2 sales of chocolate:\n");
   scanf("%f",&corner2sales[chocolate]);
   printf("Enter corner 2 sales of mint:\n");
   scanf("%f",&corner2sales[mint]);
   printf("Enter corner 2 sales of strawberry:\n");
   scanf("%f",&corner2sales[strawberry]);


   sumV = corner1sales[vanilla]+corner2sales[vanilla];/*summing corner 1 and 2 vanilla sales using values allocated in "vanilla" enum index then value is the new value for variable sumV */
   printf("Total Vanilla Sales: %.2f\n",sumV);/*printf function used to display total vanilla flavour sales in both corners 1 and 2*/

   sumC = corner1sales[chocolate]+corner2sales[chocolate];/*summing corner 1 and 2 chocolate sales using values allocated in "chocolate" enum index then value is the new value for variable sumC */
   printf("Total Chocolate Sales: %.2f\n",sumC);/*printf function used to display total chocolate flavour sales in both corners 1 and 2*/


   sumM = corner1sales[mint]+corner2sales[mint];/*summing corner 1 and 2 mint sales using values allocated in "mint" enum index then value is the new value for variable sumM */
   printf("Total Mint Sales: %.2f\n",sumM);/*printf function used to display total mint flavour sales in both corners 1 and 2*/

   sumS = corner1sales[strawberry]+corner2sales[strawberry];/*summing corner 1 and 2 strawberry sales using values allocated in "strawberry" enum index then value is the new value for variable sumS */
   printf("Total Strawberry Sales: %.2f\n",sumS);/*printf function used to display total strawberry flavour sales in both corners 1 and 2*/
   printf("\n");

   Total_sum = sumV + sumC + sumM +sumS;/*adding all sums then assigning their vzlue to the variable Total_sum*/
   printf("Bob's Ice Cream Total Sales: %.2f", Total_sum);/*printf function used to display total sales of all ice cream flavours in corners 1 and 2*/

   return 0; /*indicates that the program was run without errors*/


}
