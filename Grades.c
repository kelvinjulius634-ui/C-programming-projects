#include<stdio.h>
float Average( int marks[], int n){
int sum = 0;
int i;
 for (i = 0;i<n;i++){
 sum += marks[i];
}
 return (float)sum/n;
}
 int main(){
 int marks[5] = { 70, 68, 80, 55, 90};
 int n = 5;

 float avg = Average(marks, n);

 printf("Average marks is: %.2f\n", avg);

  if(avg >=60){
 printf("Results: Pass\n");
}else{
 printf("Results: Fail\n");
}
 return 0;
}
