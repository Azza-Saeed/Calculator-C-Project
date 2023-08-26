/*
 * Calculator.h
 *
 *  Created: 8/24/2023 11:43:43 PM
 *  Author: Azza Saeed
 */
 #include "Calculator.h"


float Addition(float number1, float number2)
{
    float Sum=0;

    Sum=number1+number2;

    return Sum;
}
float Subtraction(float number1, float number2)
{
    float Sub=0;

    Sub=number1-number2;

    return Sub;
}
float Multiplication(float number1, float number2)
{
    float Mul=0;

    Mul=number1 * number2 ;

    return Mul;
}
float Division(float number1, float number2)
{
    float Div=0;

    if(number2==0)
    {
        printf("No Division by zero...!\n");
        return;

    }
    else{
        Div= number1 / number2 ;
    }

    return Div;
}
float Power(float number1, float number2)
{
    int counter;
    float result=1;
    if(number2>0)
    {
     for(counter=1;counter<=number2;++counter){

      result =number1 * result;

      }
    }
    if(number2<0)
    {
        number2=number2 * -1;
    for(counter=1;counter<=number2;++counter){

      result =(1/number1)*result;
      }
    }

    return result;
}
float Factorial(float number)
{
    int counter;
    float Fact=1;

   for(counter=1;counter<=number;counter++) {
              Fact=Fact * counter;
          }

    return Fact;
}

void Runable_Fun(void)
{
    float (*arr[])(float,float)={Addition,Subtraction,Multiplication,Division,Power};
    float (*arr1[])(float)={Factorial};
    float number1; // first number
    float number2; // second number
    int operation; // operation to do
    float number; // factorial number
    printf("Hello , you are welcome in Calculator System....!!!!\n");
    printf("             ****************************             \n");
    printf("Enter 0 to Addition    Enter 1 to Subtraction \n");
    printf("Enter 3 to Division    Enter 2 to Multiplication \n");
    printf("Enter 4 to Power       Enter 5 to Factorial\n");
    printf("             ****************************             \n");
    printf("Please enter the operation you need:\n");
    scanf("%d",&operation);

   if( operation!=0 && operation!=1 && operation!=2 && operation!=3 && operation!=4 && operation!=5 )
   {
         printf("Please enter a valid operation....!!!\n");
   }
   else if(operation==5)
   {
        printf("enter the number you need:\n");
        scanf("%f",&number);
        printf("Result for this operation=%f\n",arr1[0](number));
   }
   else
   {
        printf("Please enter first number:\n");
        scanf("%f",&number1);
        printf("Please enter seconed number:\n");
        scanf("%f",&number2);
        printf("Result for this operation=%f\n",arr[operation](number1,number2));
   }

}
