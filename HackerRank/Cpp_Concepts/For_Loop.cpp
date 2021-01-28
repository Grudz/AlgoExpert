// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int input1;
int input2;
int interval;

void CheckNum(int num);
void PrintNum(int num);

int main()
{   
    cin >> input1 >> input2;
    for(input1; input1 <= input2; input1++){
        if (input1 < 1 || input1 > 9) {
            CheckNum(input1);
        }
        PrintNum(input1);
    }
    return 0;
}


void CheckNum(int num){
    
    if (num %2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }
}

void PrintNum(int num){
    
    if (num == 1){
        printf("one\n");
    }
    
    if (num == 2){
        printf("two\n");
    }
    
    if (num == 3){
        printf("three\n");
    }
    
    if (num == 4){
        printf("four\n");
    }
    
    if (num == 5){
        printf("five\n");
    }
    
    if (num == 6){
        printf("six\n");
    }
    
    if (num == 7){
        printf("seven\n");
    }
    
    if (num == 8){
        printf("eight\n");
    }
    
    if (num == 9){
        printf("nine\n");
    }
}
