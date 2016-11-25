function main() {
	var i = 0;

	for (i = 2; i < process.argv.length; i++) {
		console.log(`arg ${i} :  ${process.argv[i]}`);
	}

	var states = ["California", "Oregon", "Washington", "Texas"];

	var num_states = 4;

	for (i = 0; i < num_states; i++) {
		console.log("state " + i + ": " + states[i]);
	}

	return false;
}

main();
