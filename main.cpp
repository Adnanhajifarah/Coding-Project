#include <iostream>
using namespace std;

int main() {
  
  // Write your code for problem 1 below.
int totalpay ;
  int x ;
  int y ;
  y=100;
  x=50;
  // find the sum of the two variables x and y 
  int total= x + y;
  //display the sum of the two variables x and y 
 std::cout<<total;
  // Write your code for problem 2 below.
double salepercentage;
salepercentage= 0.58;
int totalsales;
totalsales= 8600000;
// calculate the total sales for the east division
int easttotsales= totalsales * salepercentage;
// display the total sales
std::cout<<"\n"<<easttotsales;
  // Write your code for problem 3 below.
int purchase;
purchase = 95;
double salestax;
salestax = .04;
double statetax;
statetax = .02;
double totaltax;
/*combining the two taxes to make one tax% for calculation*/
totaltax = statetax + salestax;
//calculating the amount of tax
double taxamount = purchase * totaltax;
//displaying the tax amount
std::cout<<"\n"<<taxamount;
  // Write your code for problem 4 below.
int mealcharge = 90;
double restauranttax = 0.08;
//displaying the charge for the meal by itslef
std::cout<<"\n"<<mealcharge;
//calculating the tax amount and then displaying it
double taxamount2 = restauranttax * mealcharge;
std::cout<<"\n"<< taxamount2;
// caculating the total after tax
double totalaftertax = taxamount2 + mealcharge;
double tippercent= 0.20;
/*calculating the tip amount then adding it to the total after tax*/
double tipamount= tippercent*totalaftertax;
double fulltotal= tipamount + totalaftertax;
//displaying the tip amount and the full total
std::cout<<"\n"<<tipamount<<"\n"<<fulltotal;
  // Write your code for problem 5 below.
int var1=28;
int var2=32;
int var3=37;
int var4=24;
int var5=34;
//finding the sum of the numbers and the average
int sum=var1+var2+var3+var4+var5;
double average = sum / 5;
//displaying the average
std::cout<<"\n"<<average;
// Write your code for problem 6 below.
int payAmount= 2200;
int payPeriods=26;
// calculating the annual pay
int AnnualPay=payAmount*payPeriods;
//displaying the annual pay 
std::cout<<"\n"<<AnnualPay;
// Write your code for problem 7 below.
double item1=15.95;
double item2=24.95;
double item3=6.95;
double item4=12.95;
double item5=3.95;
//displaying each items amount 
std::cout<<"\n"<<item1<<"\n"<<item2<<"\n"<<item3<<"\n"<<item4<<"\n"<<item5;
//calculating the subtotal then displaying it
double subtotal= item1+item2+item3+item4+item5;
std::cout<<"\n"<<subtotal;
//calculating the tax amount then displaying it
double salestax2=0.07;
double salestaxamount= salestax2 * subtotal;
std::cout<<"\n"<<salestaxamount;
//calculating the total after tax and displaying it
double totalwithtax = salestaxamount + subtotal;
std::cout<<"\n"<< totalwithtax;
}