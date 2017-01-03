class Fraction {
  constructor(numerator, denominator = 1) {
    this.numerator = numerator;
    this.denominator = denominator;
  }

  getNumerator() {
    return this.numerator;
  }

  getDenominator() {
    return this.denominator;
  }

  getValue() {
    console.log(`${this.getNumerator()} / ${this.getDenominator()}`);
  }
}

const fraction = new Fraction(5, 10);
fraction.getValue();
