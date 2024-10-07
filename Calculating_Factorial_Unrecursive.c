#include <stdio.h>

//C:\Users\Cameron\Documents\"Uni stuff"\"Year 2"\"Advanced programming"\"Lecture 2"\"Calculating_Factorial_Unrecursive.exe"

int calculateFactoral(int num){

    int factoral = 1;

    for (int i = 1; i <= num; i++){
        factoral  *= i;
    }
    return factoral;
}

int main(){

int num;

printf("Enter the number you want to factorise: ");
scanf("%d", &num);

int factoral = calculateFactoral(num);
printf("the factoral of %d is %d", num, factoral);





    return 0;
}