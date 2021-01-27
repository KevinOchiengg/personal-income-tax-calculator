#include <stdio.h>

int main(){
int number, netSalary,  allowance, salary, grossPay, paye;
char name;
   
   printf("Enter Your Employee number:\n");
   scanf ("%d",&number);
   printf("Enter Your Name:\n");
   scanf ("%s",&name);
   printf("Enter Your Salary:\n");
   scanf ("%d",&salary);
   printf("Enter Your Allowance:\n");
   scanf ("%d",&allowance);

   grossPay = allowance + salary;

      if(grossPay <= 10000){
       paye = grossPay * 0;
       netSalary = grossPay - paye;
        
      }
      else if ((grossPay >= 10001) && (grossPay <= 60000)){
         paye = (grossPay-10000) * 0.1;
         netSalary=grossPay - paye;
        
      } 
      else if ((grossPay >= 60001) && (grossPay <= 110000)){
         paye = (50000 * 0.1) + (grossPay-60000) * 0.15;
         netSalary=grossPay - paye;
        
      }
        
      else if((grossPay >= 110001) && (grossPay <= 160000)){
         paye = (50000 * 0.1) + (50000 * 0.1) + (grossPay - 110000 ) * 0.20;
         netSalary=grossPay - paye;
        
      }
      else if((grossPay >= 160001) && (grossPay <= 210000)){
         paye = (50000 * 0.1) + (50000 * 0.1) + (50000 * 0.2) + (grossPay - 160000) * 0.25;
         netSalary=grossPay - paye;
        
      }
        
      else {
         paye = (50000 * 0.1) + (50000 * 0.1) + (50000 * 0.2) + (50000 * 0.25) + (grossPay - 160000) * 0.3;
         netSalary=grossPay - paye;
      }
       
      //  printf("pf : %d\n", number);
      //  printf("Name : %s\n", name);
      //  printf("p.a.y.e : %d\n", paye);
       printf("Your Net Salary after tax deduction is : %d\n", netSalary);
        
 return 0;
}
