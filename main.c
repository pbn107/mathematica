#include <stdio.h>
#include "cs50.h"
#include <stdlib.h>
#include <string.h>
#include "test/test.h"


int add(int i, int j);
int subtract(int i, int j);
int multiply(int i, int j);
int divide(int i, int j);
int findRem(int i, int j);
int test();

int main(int argc, string argv[]) {

  if (argc == 2){
    
    if (strcmp(argv[1],"test") == 0){
      test();
      return 0;
    }
    else {
      printf("Entered the wrong argument :( \n usage if you want to test : ./main test \n");
      return 1;
    }
  }
  
  printf("<=======  Hie, welcome to mathamatica ;) =========>\n");
  
  int i = get_int("Enter your first number: ");
  int j = get_int("Enter your second number: "); 
  
  printf("What do you want to do ? \n 1. Add \n 2. Subtract \n 3. Divide \n 4. Multiply \n 5. Find Reaminder \n");
  
int answer = get_int("Enter you choice: ");
  
while(answer <= 0 || answer >=6){
  
   printf("Invalid choice!! try Again\n");
  answer = get_int("Enter you choice: ");
}
  
 switch(answer){
   case 1: printf("answer: %i ",add(i,j));
   break;
   case 2 : printf("answer: %i",subtract(i,j));
   break;
   case 3 : printf("answer: %i",divide(i,j));
   break;
   case 4 : printf("answer: %i",multiply(i,j));
   break;
   case 5 : printf("answer: %i ",findRem(i,j));
   break;
 }
  return 0;
}

int add(int i, int j){
  
  int answer = i + j;
  
  return answer;
}

int subtract(int i, int j){
  
  // write your code here
  
  return 0;
}

int divide(int i, int j){
  
  // wite your code here 
  return 0;
  }

int findRem(int i, int j){
  
  // write your code here  
  return 0;
}

int multiply(int i, int j){
  
  // write your code here
  return 0;

  }

int test(){
  
  string tests[5] = {"add","subtract","divide","multiply","modulus"};
  int num1 = rand() % (66);
  
  int num2 = rand() % (66);
  for(int i = 0; i < 5; i++){

    if(strcmp(tests[i],"add")== 0){
      
      if (add(num1,num2) == addt(num1,num2)){
        printf("\033[1;32m");
        printf("Test add passed :) \n");
        printf("\033[0m");
      }
      else {
        printf("\033[1;31m");
        printf("Test add failed :( adding %i and %i   \n expected: %i actual: %i \n", num1, num2, addt(num1,num2), add(num1,num2));
        printf("\033[0m");
        
      }     
    }
    else if(strcmp(tests[i],"subtract")== 0) {
      
      if (subtract(num1,num2) == subtractt(num1,num2)){
        printf("\033[1;32m");
        printf("Test subtract passed :) \n");
        printf("\033[0m");
      }
      else {
        printf("\033[1;31m");
        printf("Test subtract failed :( subtracting %i from %i   \n expected: %i actual: \n%i ", num2, num1, subtractt(num1,num2), subtract(num1,num2));
        printf("\033[0m");
        
      }     
    }
    else if(strcmp(tests[i],"divide")== 0){
      
      if (divide(num1,num2) == dividet(num1,num2)){
        printf("\033[1;32m");
        printf("Test divide passed :) \n");
        printf("\033[0m");
      }
      else {
        printf("\033[1;31m");
        printf("Test divide failed :( dividing %i by %i   \n expected: %i actual: %i ", num1, num2, dividet(num1,num2), divide(num1,num2));
        printf("\033[0m");
        
      }     
    }
    else if(strcmp(tests[i],"multiply")== 0){
      
      if (multiply(num1,num2) == multiplyt(num1,num2)){
        printf("\033[1;32m");
        printf("Test multiply passed :) \n");
        printf("\033[0m");
      }
      else {
        printf("\033[1;31m");
        printf("Test multiply failed :( multiplying %i by %i   \n expected: %i actual: %i \n", num1, num2, multiplyt(num1,num2), multiply(num1,num2));
        printf("\033[0m");
        
      }
      }  
    else if(strcmp(tests[i],"modulus")== 0){
      
      if (findRem(num1,num2) == findRemt(num1,num2)){
        printf("\033[1;32m");
        printf("Test modulus passed :) \n");
        printf("\033[0m");
      }
      else {
        printf("\033[1;31m");
        printf("Test modulus failed :( dividing %i by %i remainder \n expected: %i actual: %i \n", num1, num2, findRemt(num1,num2), findRem(num1,num2));
        printf("\033[0m");
        
      }     
    }
   
    }
  
  return 0;
}