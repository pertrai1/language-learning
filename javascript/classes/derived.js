class Base {
	constructor(id = 0) {
		this.m_id = id;
	}

	getId() {
		return this.m_id;
	}
};

class Derived extends Base {
	constructor(cost = 0.0) {
		super(id);
		this.m_cost = cost;
	}

	getCost() {
		return this.m_cost;
	}
};

const derived = new Derived(1.3, 5);
console.log(`ID: ${derived.getId()}`);
console.log(`Cost: ${derived.getCost()}`);
