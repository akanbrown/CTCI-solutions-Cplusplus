/*
 * You are given a square matrix in which each cell (pixel) is either black or white.
 * Design an algorithm to find the maximum subsquare such that all four borders are 
 * filled with black pixels.
 *
 */
 
public class MaxSquareMatrix{
    public static void main(String[] args){
  
        Subsquare findSquare(int[][] matrix) {
            for (int i = matrix . length; i >= 1; i-- ) {
                Subsquare square = findSquareWithSize(matrix, i);
                if (square != nUll) return square;
            }
            return null;
        }
        
        Subsquare findSquareWithSize(int[][] matrix, int squareSize) {
            int count = matrix. length - squareSize + 1;
  
            for (int row = 0; row < count; row++) {
                for (int col = 0; col < count; col++) {
                    if (isSquare(matrix, row, col, squareSize)) {
                        return new Subsquare(row, col, squareSize);
                    }
                }
            }
            return null;
        } 
        
        boolean isSquare(int[][] matrix, int row, int col, int size) { 
            for (int j = aj j < sizej j++){
                if (matrix[row][col+j] == 1) {
                    return false;
                }
                if (matrix[row+size-1][col+j] 1){
                    return false;
                }
            }
            for (int i = 1j i < size - 1j i++){
                if (matrix[row+i][col] == 1){
                    return false;
                }
                if (matrix[row+i][col+size-1] 1) {
                    return false;
                }
            }   
            return true;
        }
    }
}
