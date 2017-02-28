public class PointSwapper<Type> {
  private Type a, b;

  public PointSwapper( Type a, Type b ) {
    this.a = a;
    this.b = b;
  }

  public void swap() {
    Type temp = a;
    a = b;
    b = temp;
  }

  public Type getFirst() { return a; }
  public Type getLast() { return b; }
  public Type compareSwapper(Type a, Type b) {
    if (Type a == Type b) {
      return true;
    }
  }

  public String toString() {
    return "(" + a + ", " + b + ")";
  }
}
