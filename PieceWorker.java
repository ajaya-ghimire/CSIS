// PieceWorker class
public class PieceWorker extends Employee {
    private double wage; // wage per piece
    private int pieces;  // number of pieces produced

    // constructor
    public PieceWorker(String firstName, String lastName, String socialSecurityNumber, double wage, int pieces) {
        super(firstName, lastName, socialSecurityNumber);
        if (wage < 0.0) {
            throw new IllegalArgumentException("Wage per piece must be >= 0.0");
        }
        if (pieces < 0) {
            throw new IllegalArgumentException("Number of pieces must be >= 0");
        }
        this.wage = wage;
        this.pieces = pieces;
    }

    // set wage
    public void setWage(double wage) {
        if (wage < 0.0) {
            throw new IllegalArgumentException("Wage per piece must be >= 0.0");
        }
        this.wage = wage;
    }

    // get wage
    public double getWage() {
        return wage;
    }

    // set pieces
    public void setPieces(int pieces) {
        if (pieces < 0) {
            throw new IllegalArgumentException("Number of pieces must be >= 0");
        }
        this.pieces = pieces;
    }

    // get pieces
    public int getPieces() {
        return pieces;
    }

    // calculate earnings
    @Override
    public double earnings() {
        return getWage() * getPieces();
    }

    // return String representation of PieceWorker object
    @Override
    public String toString() {
        return String.format("PieceWorker: %s%nWage per piece: $%,.2f%nPieces produced: %d",
                super.toString(), getWage(), getPieces());
    }
}
