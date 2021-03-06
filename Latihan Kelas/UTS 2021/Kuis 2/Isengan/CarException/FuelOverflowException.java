package CarException;
public class FuelOverflowException extends Exception {
    public int overflow;
  
    public FuelOverflowException(int overflow) {
      super();
      this.overflow = overflow;
    }
  
    public String toString() {
      return "Fuel capacity not enough. " + this.overflow + " fuel overflowed.";
    }
  }
  