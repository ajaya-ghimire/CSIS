import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Button;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

public class TicTacToeGUI extends Application {
    private static final int BOARD_SIZE = 3;
    private CellValue[][] board;
    private boolean xTurn = true; // X goes first

    public enum CellValue {
        X, O, EMPTY
    }

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        initializeBoard();

        GridPane grid = new GridPane();
        Scene scene = new Scene(grid, 300, 300);

        for (int row = 0; row < BOARD_SIZE; row++) {
            for (int col = 0; col < BOARD_SIZE; col++) {
                Button button = createCell(row, col, grid);
                grid.add(button, col, row);
            }
        }

        primaryStage.setTitle("Tic-Tac-Toe");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private Button createCell(int row, int col, GridPane grid) {
        Button button = new Button();
        button.setPrefSize(100, 100);
        button.setOnAction(e -> handleCellClick(button, row, col, grid));
        return button;
    }

    private void handleCellClick(Button button, int row, int col, GridPane grid) {
        if (board[row][col] == CellValue.EMPTY) {
            board[row][col] = xTurn ? CellValue.X : CellValue.O;
            button.setText(xTurn ? "X" : "O");
            button.setDisable(true);
            xTurn = !xTurn;

            if (checkWin()) {
                showWinnerAlert();
                resetBoard(grid);
            } else if (isBoardFull()) {
                showDrawAlert();
                resetBoard(grid);
            }
        }
    }

    private void initializeBoard() {
        board = new CellValue[BOARD_SIZE][BOARD_SIZE];
        for (int row = 0; row < BOARD_SIZE; row++) {
            for (int col = 0; col < BOARD_SIZE; col++) {
                board[row][col] = CellValue.EMPTY;
            }
        }
    }

    private void resetBoard(GridPane grid) {
        initializeBoard();
        xTurn = true;
        for (int row = 0; row < BOARD_SIZE; row++) {
            for (int col = 0; col < BOARD_SIZE; col++) {
                Button button = (Button) grid.getChildren().get(row * BOARD_SIZE + col);
                button.setText("");
                button.setDisable(false);
            }
        }
    }

    private boolean checkWin() {
        // Check rows, columns, and diagonals for a win
        for (int i = 0; i < BOARD_SIZE; i++) {
            if (board[i][0] != CellValue.EMPTY &&
                board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
                return true; // Check rows
            }
            if (board[0][i] != CellValue.EMPTY &&
                board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
                return true; // Check columns
            }
        }
        if (board[0][0] != CellValue.EMPTY &&
            board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            return true; // Check diagonal (top-left to bottom-right)
        }
        if (board[0][2] != CellValue.EMPTY &&
            board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            return true; // Check diagonal (top-right to bottom-left)
        }
        return false;
    }

    private boolean isBoardFull() {
        for (int row = 0; row < BOARD_SIZE; row++) {
            for (int col = 0; col < BOARD_SIZE; col++) {
                if (board[row][col] == CellValue.EMPTY) {
                    return false;
                }
            }
        }
        return true;
    }

    private void showWinnerAlert() {
        Alert alert = new Alert(AlertType.INFORMATION);
        alert.setTitle("Game Over");
        alert.setHeaderText(null);
        alert.setContentText(xTurn ? "Player O wins!" : "Player X wins!");
        alert.showAndWait();
    }

    private void showDrawAlert() {
        Alert alert = new Alert(AlertType.INFORMATION);
        alert.setTitle("Game Over");
        alert.setHeaderText(null);
        alert.setContentText("It's a draw!");
        alert.showAndWait();
    }
}

