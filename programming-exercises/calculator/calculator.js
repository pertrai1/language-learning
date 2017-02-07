class TipCalculator {
	constructor(billAmount, tip, tipRate, total) {
		this.billAmount = billAmount;
		this.tip = tip;
		this.tipRate = tipRate;
		this.total = total;
	}

	billAmountPrompt(question) {
		return question;
	}

	tipRatePrompt(question) {
		return question;
	}

	billToNumber(num) {
		return +num;
	}

	tipToNumber(num) {
		return +num;
	}

	tipAmount() {
		let bill = this.billAmount * (this.tipRate / 100);
		return Math.round(bill);
	}

	totalAmount() {
		return this.billAmount + this.tipAmount;
	}

	displayTip() {
		return `Tip: $${this.tipAmount}`;
	}

	displayTotal() {
		return `Total: $${this.totalAmount}`;
	}
}
