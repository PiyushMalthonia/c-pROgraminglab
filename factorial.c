#include<stdio.h>
int main()
{
  int number,i;
  unsigned long long factorial=1;//Use unsigned long long to store large factorial values
  //Input from usewr
  printf("Enter a postive integer");
  scanf("%d",&number);
  //Check if input number is negative
  if(number<0){
    printf("Error:Factorial is not defined for negative numbers.|n");
  }else{
    //Calculate factorial using a for loop
    for(i=1;i<=number;++i){
    factorial*=i;//Multiply factorial by current number
    }
    //Output the factorial
    printf("Factorial of%d=%llu\n",number,factorial);
  }
  return 0;
}