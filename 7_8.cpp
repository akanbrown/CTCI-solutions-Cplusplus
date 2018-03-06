/**
Othello is played as follows: each Othello piece is 
white on one side and black on the other. When a piece 
is surrounded by its opponents on both the left and right
sides, or both the top and bottom, it is said to be captured 
and its color is flipped. On your turn, you must capture 
at least one of your opponent's pieces. The game ends when 
either user has no more valid moves, and the win is assigned 
to the person with the most pieces.
**/

/**
Othello has these major steps:
2. Game () which would be the main function to manage all the activity in the game:
3. Initialize the game which will be done by constructor
4. Get first user input
5. Validate the input
6. Change board configuration
7. Chck if someone has won the game.
8. Get second user input
9. Validate the input
10. Change the board configuration
11. Check if someone haswon the game
**/

public class Question{
  private final int white = 1;
  private final int black = 2;
  private int[][] board;
  /* Sets up the board in the standard othello starting positions,
  * and starts the game*/
  public void start() {...}
  
  /*Returns the winner, if any. If there are no winners, returns 
  * 0 */
  private int won(){
    if (!canGo (white) && !canGo(black)){
      int count = 0;
      for (int i=0; i<8;i++){
        for (int j=0;j<8;j++){
          if (board[i][j]==white){
            count++;
          }
          if (board[i][j] == black){
            count--;
          }
        }
      }
      if (count > 0) return white;
      if (count < 0) return black;
      return 3;
    }
    return 0;
  }
  
  /* Returns whether the player ohte specified color has a valid 
  * move in his turn. This will return false when
   1. none of his pieces are present
   2. none of his moves result in him gaining new pieces
   3. the board i sfilled up
   */
   private boolean canGo(int color){ ... }
   /* Returns if a move at coordinate (x, y) i s valid move for the
   * specified player */
   private boolean isValid (int color, int x, int y) { .... }
   
   /* Prompts the player for a move and the coordinates for the move.
   * Throws an exception if hte input is not valid or if the entered
   * coordinates do notmake a valid move. */
   private void getMove (int color) throws Exception { ... }
   
   /* Adds the move onto the board, and the pieces gained from that 
   * move. Assumes the move is valid. */
   private void add (int x, int y, int color ){ ... }
   
  
 /* The actual game: runs continuously until a player wins */
   private void game(){
    printBoard();
    while (won() == 0){
      boolean valid = false;
      while (!valid){
        try{
          getMove(black);
          valid = true;
        } catch (Exception e){
          System.out.println("Enter a valid coordinate!");
        }
      }
   
   valid = false;
      printBoard();
   
   while (!valid) {
        try{
          getMove(white);
          valid = true;
        } catch (Exception e){
          System.out.println("Enter a valid coordinate!");
        }
      }
   
   printBoard();
   

 }
   
 
    if (won()!=3){
   
   
System.out.println(won() == 1 ? "white" : "black" + " won!");
   
   
} else {
   
     System.out.println("It's a draw!");
   
   
}
   
 }
  
}
