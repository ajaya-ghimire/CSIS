import java.util.Scanner;

public class TicTacToe {
    private enum CellValue { X, O, EMPTY }

    private CellValue[][] board;
    private boolean xTurn;

    public TicTacToe() {
        board = new CellValue[3][3];
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                board[row][col] = CellValue.EMPTY;
            }
        }
        xTurn = true;
    }

    public void playGame() {
        Scanner input = new Scanner(System.in);
        boolean gameWon = false;
        boolean gameDraw = false;

        System.out.println("Welcome to Tic-Tac-Toe!");
        System.out.println("Player X goes first, Player O goes second.");

        while (!gameWon && !gameDraw) {
            displayBoard();

            char playerSymbol = (xTurn) ? 'X' : 'O';
            System.out.println("Player " + playerSymbol + ", enter row (0-2) and column (0-2): ");

            int row = input.nextInt();
            int col = input.nextInt();

            if (isValidMove(row, col)) {
                makeMove(row, col);
                gameWon = checkWin(playerSymbol);
                gameDraw = isBoardFull();
                xTurn = !xTurn;
            } else {
                System.out.println("Invalid move. Try again.");
            }
        }

        displayBoard();

        if (gameWon) {
            char winner = (xTurn) ? 'O' : 'X';
            System.out.println("Player " + winner + " wins!");
        } else {
            System.out.println("It's a draw!");
        }
    }

    private void displayBoard() {
        System.out.println("Current Board:");
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                char symbol = (board[row][col] == CellValue.EMPTY) ? ' ' : (board[row][col] == CellValue.X) ? 'X' : 'O';
                System.out.print("[" + symbol + "]");
            }
            System.out.println();
        }
    }

    private boolean isValidMove(int row, int col) {
        return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == CellValue.EMPTY);
    }

    private void makeMove(int row, int col) {
        board[row][col] = (xTurn) ? CellValue.X : CellValue.O;
    }

    private boolean checkWin(char playerSymbol) {
        CellValue target = (playerSymbol == 'X') ? CellValue.X : CellValue.O;

        // Check rows, columns, and diagonals for a win
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == target && board[i][1] == target && board[i][2] == target) {
                return true; // Check rows
            }
            if (board[0][i] == target && board[1][i] == target && board[2][i] == target) {
                return true; // Check columns
            }
        }

        if (board[0][0] == target && board[1][1] == target && board[2][2] == target) {
            return true; // Check diagonal (top-left to bottom-right)
        }

        if (board[0][2] == target && board[1][1] == target && board[2][0] == target) {
            return true; // Check diagonal (top-right to bottom-left)
        }

        return false;
    }

    private boolean isBoardFull() {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (board[row][col] == CellValue.EMPTY) {
                    return false;
                }
            }
        }
        return true;
    }

    public static void main(String[] args) {
        TicTacToe game = new TicTacToe();
        game.playGame();
    }
}
