/*
 * If_else_programming_exercises_and_solutions in_C_part2
 *
 *  Created on: Aug 23, 2024
 *      Author: Hager Khaled
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{


/*
//***********14.C program to check whether triangle is valid or not if angles are given********************
   int angle1,angle2,angle3;
   printf("Input first angle:");
   scanf("%d",&angle1);
   printf("Input second angle:");
   scanf("%d",&angle2);
   printf("Input third angle: ");
   scanf("%d",&angle3);
   if(angle1+angle2+angle3 == 180 &&angle1>0 &&angle2>0 &&angle3>0)
        printf("The triangle is valid");
   else
        printf("Triangle is not valid.");

*/



/*
//************15.Write a C program to input side of a triangle and check whether triangle is valid or not using if else. **************8
   int side1,side2,side3;
   printf("Input first side:");
   scanf("%d",&side1);
   printf("Input secound side:");
   scanf("%d",&side2);
   printf("Input third side:");
   scanf("%d",&side3);
   if((side1+side2)>side3 &&((side1+side3)>side2) && (side3+side2)>side1)
     printf("Triangle is valid");
   else
    printf("Triangle is not valid");



    */



    /*
//***********16.Write a C program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle using if else.**************
   int side1,side2,side3;
   printf("Input first side:");
   scanf("%d",&side1);
   printf("Input secound side:");
   scanf("%d",&side2);
   printf("Input thord side:");
   scanf("%d",&side3);
   if((side1 == side2) && (side1 == side3) && (side2 == side3))
      printf("Triangle is equilateral triangle");
   else if((side1 == side2) || (side1 == side3) || (side2 == side3))
      printf("Triangle is Isosceles triangle");
   else
      printf("Triangle is Scalene triangle");


*/



/*
//************17.Write a C program to find all roots of a quadratic equation using if else*************
    float a,b,c,delta,root1,root2,imag;
    printf("Input a: ");
    scanf("%f",&a);
    printf("Input b: ");
    scanf("%f",&b);
    printf("Input c: ");
    scanf("%f",&c);
    delta = b*b -4*a*c;
    if(delta>0)
    {
        root1 = (-b+sqrt(delta))/(2*a);
        root2 = (-b-sqrt(delta))/(2*a);
        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(delta==0)
    {
        root1=root2=-b/(2*a);
        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(delta<0)
    {
        root1=root2=-b/(2*a);
        imag = sqrt(-delta)/(2*a);
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",root1, imag, root2, imag);
    }
    else
        printf("error!");


*/



/*

//************18.Write a C program to input cost price and selling price of a product and check profit or loss************
    int cost,sell,profit,loss;
    printf("Input cost price: ");
    scanf("%d",&cost);
    printf("Input selling price:");
    scanf("%d",&sell);
    if(sell>cost)
    {
        profit = sell - cost;
        printf("Profit:%d",profit);
    }
    else if(sell<cost)
    {
        loss = cost - sell;
        printf("loss:%d",loss);
    }
    else
        printf("No Profit and No Loss");


*/



/*

//*************19.Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage and grade**********
   int ph,ch,Bio,math,comp,sum=0;
   float percentage;
   printf("Input marks of five subjects:\n");
   scanf("%d%d%d%d%d",&ph,&ch,&Bio,&math,&comp);
   sum = ph+ch+Bio+math+comp;
   percentage = sum/5;
   printf("Percentage = %.2f \n",percentage);
   if(percentage>=90)
     printf(" Grade A");
   else if(percentage>=80)
     printf(" Grade B");
   else if(percentage>=70)
     printf(" Grade C");
   else if(percentage>=60)
     printf(" Grade D");
   else if(percentage>=40)
     printf(" Grade E");
   else
     printf(" Grade F");


     */



    /*
//*************20.Write a C program to input basic salary of an employee and calculate gross salary,,Basic Salary <= 10000 : HRA = 20%, DA = 80% ,Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90% ,,Basic Salary >= 20001 : HRA = 30%, DA = 95%
   float salary,HRA,DA,Gross_salary;
   printf("Input basic salary of an employee: ");
   scanf("%f",&salary);

   if(salary <= 10000)
   {
       HRA = 0.2*salary;
       DA = 0.8*salary;
   }
   else if( salary>10000 &&salary<=20000)
   {
       HRA = 0.25*salary;
       DA = 0.9*salary;
   }
   else
   {
       HRA = 0.3*salary;
       DA = 0.95*salary;
   }
   Gross_salary = HRA + DA + salary;
   printf("Gross salary = %.2f",Gross_salary);


   */




//************21.Write a C program to calculate the total electricity bil*********

   int unit;
   float total,surcharge,count;
   printf("enter units ");
   scanf("%d",&unit);
   if(unit<=50)
      count = unit*.50;
   else if(unit<=150)
      count = 25+((unit-50)*.75);
   else if(unit <=250)
      count = 100+((unit-150)*1.20);
   else
      count = 220+((unit-250)*1.50);

   surcharge = count *.20;
   total =count +surcharge;
   printf("Electricity Bill = Rs. %.2f",total);

    return 0;
}
