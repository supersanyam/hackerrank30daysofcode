/*
Day 2 : Operators 
Objective 
In this challenge, you'll work with arithmetic operators. Check out the Tutorial tab for learning materials and an instructional video!

Task 
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result!

Input Format

There are  lines of numeric input: 
The first line has a double,  (the cost of the meal before tax and tip). 
The second line has an integer,  (the percentage of  being added as tip). 
The third line has an integer,  (the percentage of  being added as tax).

Output Format

Print The total meal cost is totalCost dollars., where  is the rounded integer result of the entire bill ( with added tax and tip).

Sample Input

12.00
20
8
Sample Output

The total meal cost is 15 dollars.
https://www.hackerrank.com/challenges/30-operators/problem
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double mealCost;
    int taxPercent;
    int tipPercent;
    int totalCost;
    double total;    
    scanf("%lf",&mealCost);
    scanf("%d",&tipPercent);
    scanf("%d",&taxPercent);
    total=mealCost+mealCost*tipPercent/100+mealCost*taxPercent/100;
    totalCost=round(total);
    printf("The total meal cost is %d dollars.",totalCost);
    return 0;
}

