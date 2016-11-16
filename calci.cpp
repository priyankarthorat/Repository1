#include <stdio.h>

#include <stdlib.h>


#include <math.h>

void main() {

clrscr();

char choice, choice2;

int addition=0, sum=0, subtraction=0, sub=0, multiplication=1, multi=1, division=1, dvs=1, square=0;

double logx, resultlog, sinx, resultsin, cosx, resultcos, tanx, resulttan, rootx, resultroot, expx, resultexp;

double fact, factorial, resultfact=1;

printf("WELCOME TO COMSATS INSTITUTE OF INforMATION TECHNOLOGY,ABBOTTABAD \n");

printf("BIT-II nn");

printf("MADE BY: nn");

printf("AMBER SARDAR nn");

printf("MUNAZZA HAMEEDnn");

printf("Press enter to use the calculator");
getche();

clrscr();

printf("Enter choice n");

printf("Press n");

printf("[1] for Addition n");

printf("[2] for Subtraction n");

printf("[3] for Multiplication n");

printf("[4] for Division n");

printf("[5] for Scientific Functions n");

printf("[E] for Exit n");

choice=getch();


if((choice=='e')||(choice=='E'))

exit(0);
 

else if(choice=='1') {

clrscr();

printf("Add numbers or press q to quit n");

do {

printf("Enter number ");

scanf("%d",&addition);

sum=addition+sum;}

while(getch()!='q');

printf("Result is %d",sum);

getche();

}

 

else if(choice=='2') {

clrscr();

printf("This program subtract given number from last given number or press q to quit n");

printf("Enter number ");

scanf("%d",&subtraction);

sub=subtraction;

while(getch()!='q') {

printf("Enter number ");

scanf("%d",&subtraction);

sub=sub-subtraction;}

while(getch()!='q');

printf("Result is %d",sub);

getch();

}

else if(choice=='3') {
clrscr();

printf("Multiply numbers or press q to quit ");

do {

printf("Enter number ");

scanf("%d",&multiplication);

multi=multiplication*multi; }

while(getch()!='q');
printf("Result is %d",multi);

getch();

}

 

else if(choice=='4') {

clrscr();

printf("This program divide given number from last given number or press q to quit n");

printf("Enter number ");

scanf("%d",&division);

dvs=division;

while(getch()!='q') {

printf("Enter number ");

scanf("%d",&division);

dvs=subtraction/dvs;}

printf("Result is %d",dvs);

getch();

}
else if(choice=='5') {

clrscr();

printf(" Scientific Function n");

printf("Press n");

printf("[1] for x square n");

printf("[2] for root of x n");

printf("[3] for log x n");

printf("[4] for exp of x n");

printf("[5] for Factorial of x n");

printf("[6] for Sin x n");

printf("[7] for Cos x n");

printf("[8] for Tan x n");

printf("[E] for Exit n");

choice2=getch();
}
 
if((choice2=='e')||(choice2=='E'))

exit(0);

else if(choice2=='1') {

clrscr();

printf("This program calculate square of x n");

printf("Enter number ");

scanf("%d",&square);

square=square*square;

printf("Result is %d",square);

getch();

}
else if(choice2=='2') {

clrscr();

printf("This program calculate Square root of x n");

printf("Enter number ");

scanf("%lf",&rootx);

resultroot=sqrt(rootx);

printf("The square root of %lf is %lfn", rootx, resultroot);

getch();

}
else if(choice2=='3') {

clrscr();

printf("This program calculate Natural log of x n");

printf("Enter number ");

scanf("%lf",&logx);

resultlog=log(logx);

printf("The natural log of %lf is %lfn", logx, resultlog);

getche();

}
else if(choice2=='4') {

clrscr();

printf("This program calculate e ^ x n");

printf("Enter number ");

scanf("%lf",&expx);

resultexp = exp(expx);

printf("'e' raised to the power  of %lf (e ^ %lf) = %lfn",expx, expx, resultexp);
getche();
}
 
else if(choice2=='5') {
clrscr();
printf("This program calculate Factorial x n");
printf("Enter number ");
scanf("%lf",&fact);
for(int factorial=fact;factorial>=1;factorial--)
resultfact=resultfact*factorial;
printf("The factorial of %lf is %lf ",fact,resultfact);
getch();
}
 
else if(choice2=='6') {
clrscr();
printf("This program calculate Sin x n");
printf("Enter number ");
scanf("%lf",&sinx);
resultsin=sin(sinx);
printf("The sin of %lf is %lfn", sinx, resultsin);
getche();
}
 
else if(choice2=='7') {
clrscr();
printf("This program calculate Cos x n");
printf("Enter number ");
scanf("%lf",&cosx);
resultcos=cos(cosx);
printf("The Cos of %lf is %lfn", cosx, resultcos
}
else if(choice2=='8') {
clrscr();
printf("This program calculate Tan x n");
printf("Enter number ");
scanf("%lf",&tanx);
resulttan=tan(tanx);
printf("The Tan of %lf is %lfn", cosx, resultcos);
}
}.
