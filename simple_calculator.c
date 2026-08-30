#include<stdio.h>
float add(float a, float b){
    return a + b;
}
float subtract(float a, float b){
    return a - b;
}
float multply(float a, float b){
    return a * b;
}
float devide(float a, float b){
    return a / b;
}
 int main(){
   int functions;
   float a,b,ans;
     printf("please enter the two numbers: ");
     scanf("%f %f", &a, &b);
     printf("Please enter the function:");
     scanf("%d", &functions);
     switch(functions){
         case 1:
         ans = add(a, b);
         printf("%.3f", ans);
         break;
         case 2:
         ans = subtract(a, b);
         printf("%.3f", ans);
         break;
         case 3:
         ans = multply(a, b);
         printf("%.3f", ans);
         break;
         case 4:
         ans = devide(a, b);
         printf("%.3f", ans);
         break;
         default:
     printf("INVALID OPTIONS");
     }
     return 0;
 }