#include <stdio.h>

int main(){
long int  netSalary,  allowance, salary, grossPay, paye;
int number;
char name;
   
   printf("Enter Your Employee number:\n");
   scanf ("%ld",&number);
   printf("Enter Your Name:\n");
   scanf ("%s",&name);
   printf("Enter Your Salary:\n");
   scanf ("%ld",&salary);
   printf("Enter Your Allowance:\n");
   scanf ("%ld",&allowance);

   grossPay = allowance + salary;

      if(grossPay <= 10000)
       paye = grossPay * 0;
       
      else if (grossPay <= 60000)
         paye = (grossPay-10000) * 10/100;
         
      else if (grossPay <= 110000)
         paye = (50000 * 10/100) + (grossPay-60000) * 15/100;
         
      else if(grossPay <= 160000)
         paye = (50000 * 10/100) + (50000 * 15/100) + (grossPay - 110000 ) * 20 / 100;
         
        
      else if(grossPay <= 210000)
         paye = (50000 * 10 / 100) + (50000 * 15 / 100) + (50000 * 20 / 100) + (grossPay - 160000) * 25/100;
        
      else 
          paye = (50000 * 10 / 100) + (50000 * 15 / 100) + (50000 * 20 / 100) + (50000 * 25 / 100) + ((grossPay - 210000) * 30 / 100);
         
      
       
      netSalary=grossPay - paye;
      printf("Net Salary: KSH.%ld\n", netSalary);
    
        
 return 0;
}
