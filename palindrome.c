#include<stdio.h>
int palindrome(int n){
    int original,rem,rev=0;
    original=n;

    while(n!=0){
        rem=n % 10;
        rev=rev *10+rem;
        n=n/10;
    }
    if(original==rev)
    {
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n)){
        printf("its a palindrome number.");
    }
    else{
        printf("it's not a palindrome number.");
    }
    }