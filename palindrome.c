/*write a program to check palindrome number in c*/
#include<stdio.h>
int main()
//  A palindrome number is a number that is same after reverse. eg: 121,313,45654,etc.
{
    int n,r,sum=0,temp;
    printf("Enter the number: \n");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = (sum*10)+r;
        n=n/10;
    }
    if(temp == sum)
    printf("Palindrome number");
    else
    printf("Not palindrome");
    return 0;
}