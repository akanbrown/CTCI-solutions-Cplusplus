/** 

Write a method to generate the nth fibonacci number

**/


public class Solution{
  public static int fib(int n){
    if (n < 0) return -1; //error condition
    
    if (n==0 || n==1) return 1;

