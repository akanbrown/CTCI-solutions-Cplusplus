
/**
You are given two sorted arrays, A and B, and A has a large enough buffere at the end
to hold B. Write a method to merge B into A in sorted order.

**/

/**
The code is part of the standard merge-sort code. We merge
A and B from the back, by comparing each element.

**/

public static void merge(int[] a, int[] b, int n, int m){
  int k = m + n - 1; //Index of last location of array b
  int i = n - 1; //Index of last element in array b
  int j = m - 1; //Index of last element in array a
  
  //Start comparing from the last element and merge a and b
  while (i >= 0 && j >= 0){
    if (a[i] > b[j]){
      a[k--] = a[i--];
    }else {
