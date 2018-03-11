/** 

Write a method to generate the nth fibonacci number

**/


public class Solution{
  public static int fib(int n){
    if (n < 0) return -1; //error condition
    
    if (n==0 || n==1) return 1;

    return (fib(n-1) + fib(n-2));
  }

  public static void main(String[] args){
    for (int i=0;i<10;i++){
      System.out.print(fib(i) + " ");
    }
    System.out.println();
  }
}


/**
Iterative solution:
int fib(int n){
  if (n < 0) return -1;
  if (n == 0) return 0;
  int a = 1, b=1;
  
  for (int i=3; i<=n;i++){
