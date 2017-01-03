function sortColumn() {
	let length = [30, 50, 20, 10, 40];
	for (let startIndex = 0; startIndex < length.length; ++startIndex) {
		let smallestIndex = startIndex;

		for (let currentIndex = startIndex + 1; currentIndex < length.length; ++currentIndex) {
			if (currentIndex < smallestIndex) {
				smallestIndex = currentIndex;
			}
		}

		// let [smallestIndex, startIndex] = [startIndex, smallestIndex];

		for (let index = 0; index < length.length; ++index) {
			console.log(`The index is ${index}`);
		}
	}
}

sortColumn();
