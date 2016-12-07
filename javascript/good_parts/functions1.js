function add(a, b) {
	return a + b;
}

function mull(a, b) {
	return a * b;
}
/**
 * Write a function identifyf that takes an argument and returns a function
 * that returns that argument
 */

 function identifyf(arg) {
	 return function() {
		 return arg;
	 }
 }

/**
 * Write a function addf that adds from two invocations.
 * ex: addf(3)(4) // 7
 */

function addf(arg) {
	return function(arg1) {
		return arg + arb1;
	}
}

/**
 * Write a function liftf that takes a binary function, and makes it callable
 * with two invocations
 * ex: var addf = liftf(add)
 * ex: addf(3)(4)
 * ex: liftf(mul)(5)(6);
 */

function liftf(binary) {
	return function (first) {
		return function (second) {
			return binary(first, second);
		}
	}
}

/**
 * Write a function curry that takes a binary function and an argument, and
 * returns a function that can take a second argument
 */

function curry(binary, arg) {
	return function(arg2) {
		return binary(arg, arg2);
	}
}

/**
 * extra credit for using another function
 * function curry(binary, first) {
 *		return liftf(binary)(first);
 * }
 */

/**
 * Same as above but being able to pass multiple arguments to curry
 */

function curry2(fn, ...args1) {
	return function(...args2) {
		return fn(...args1, ...args2);
	}
}

/**
 * Using ES6
 */

function curry3(fn, ...args) {
	return (...args2) => fn(...args, ...args2);
}
