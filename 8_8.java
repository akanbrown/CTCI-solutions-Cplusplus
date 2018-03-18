/**
Write an algorithm to print all ways of arranging eight queens
on a chess board so that none of them share the same row, column,
or diagonal
**/

/**
We will use a backtracking algorithm. For each row, the column 
where we want to put the queen is based on checking that it does 
not violate the required condition.
**/

/**
1. For this, we need to store the column of the queen in each 
row as soon as we have finalized it. Let ColumnForRow[] be the
array which stores the column number for each row.

2. The checks that are required for the three given conditions 
are:
On the same Column : ColumnForRow[i] = COlumnForRow[j]
On the ssame Diagonal : (ColumnForRow[i] - ColumnForRow[j] ) == (i-j) or
                        (ColumnForRow[j] - COlumnForRow[i]) == (i - j)
                        
**/

/**
Code: 
**/

int columnForRow[] = new int[8];
boolean check(int row){
  for (int i=0; i < row; i++){
    int diff = Math.abs(columnForRow[i]-columnForRow[row]);
    if (diff == 0 || diff == row-i) return false;
  }
  return true;
}

void PlaceQueen(int row){
  if (row == 8) {
