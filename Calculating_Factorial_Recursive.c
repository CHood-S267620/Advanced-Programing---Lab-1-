#include <stdio.h>

//C:\Users\Cameron\Documents\"Uni stuff"\"Year 2"\"Advanced programming"\"Lecture 2"\"Calculating_Factorial_Recursive.exe"

int calculateFactoral(int num){
    if (num ==0){
        return 1;
    } else{
        return num * calculateFactoral(num-1);
    }
}

int main(){

int num;

printf("Enter the number you want to factorise: ");
scanf("%d", &num);

int factoral = calculateFactoral(num);
printf("the factoral of %d is %d", num, factoral);





    return 0;
}