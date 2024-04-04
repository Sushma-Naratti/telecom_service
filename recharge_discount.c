// Write a C program for the following scenario: A telecom service provider offers
// recharge discount of Rs. 100 for using GPay wallet, Rs. 50 for using Phone Pe
// wallet and Rs. 200 for using Axis Bank credit card only if in all cases the recharge
// amount is more than Rs. 499. Program must accept the Recharge amount and
// mode of payment. The net amount to be paid must be the output of the program

#include <stdio.h>
#include <string.h>
int main()
{
      float recharge;
      char mode[50];
      printf("Discount is available for\n 1.GPay wallet\n2.PhonePay wallet\n3.Axis_credit_card:\n");
      printf("Enter recharge amount and mode of transaction..:");
      scanf("%f %s", &recharge, mode);
      if (recharge > 499)
      {
            if (!strcmp(mode, "GPay"))
            {
                  printf("Congratulations you have got discount of Rs.100\n");
                  printf("Total amount to be paid by customer is %.2f:\n", recharge - 100);
            }
            else if (!strcmp(mode, "PhonePay"))
            {
                  printf("Congratulations..!! you have got discount of Rs.50\n");
                  printf("Total amount to be paid by customer is %.2f:\n", recharge - 50);
            }
            else if (!strcmp(mode, "Axis_credit_card"))
            {
                  printf("Congratulations you have got discount of Rs.200\n");
                  printf("Total amount to be paid by customer is %.2f:\n", recharge - 200);
            }
      }
      else
      {
            printf("The amount to be paid by the customer is %0.2f\n", recharge);
      }
      return 0;
}