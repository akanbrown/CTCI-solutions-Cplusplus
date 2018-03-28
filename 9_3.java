/**
Given a sorted array of n integers that has been rotated an unknown number of times,
give an O(log n) algorithm tha tfinds an element in the array. You may assume that the array was 
originally sored in increasing order.

EXAMPLE:
Input: find 5 in array (15 15 19 20 25 1 3 4 5 7 10 14)
Output: 8 (the index of 5 in the array)

**/
/**
SOLUTION

We can do this with a modification of binary search.
**/

public static in search (int a[], int l, int u, int x){
  while (1 <= u){
    int m = (1 + u)  / 2;
    if (x == a[m]){
      return ;
    } else if (a[l] <= a[m]) { 
      if (x > a[m]){
        l = m+1;
      } else if (x >= a[1]){
        u = m-1;
      }else{
        l = m+ 1;
      }
    }
    else if (x < a[m]) u = m-1;
    else if (x <= a[u] l = m+1;
    else u = m-1;
  }

  return -1;
}

public static int search(int a[, int x){
  return search(a, 0, a.length-1, x);
}
/**
What about duplicates? You may observe tha the above function doesn't given you an efficient result in 
the case of duplicate elements. However, if your array has dupicate entries then we can't do better than
O(n) which is as good as linear search.

For example, if
