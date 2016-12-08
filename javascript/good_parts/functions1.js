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

function twice(binary) {
    return function(a) {
        return binary(a, a);
    };
}

/**
 * Write reverse, a function that reverses the arguments of a binary function
 */

function reverse(binary) {
    return function(arg1, arg2) {
        return binary(arg2, arg1);
    };
}

/**
 * Using ES6
 */

function reverse(func) {
    return function (...args) {
        return function func(...args.reverse());
    };
}

/**
 * Write a function composeu that takes two unary functions and returns a unary function that calls them both
 */

function composeu(func1, func2) {
    return function(arg) {
        return func2(func1(arg));
    }
}

/**
 * Write a function composeb that takes two binary functions and returns a function that calls them both
 */

function composeb(func1, func2) {
    return function(a, b, c) {
        return func2(func1(a, b), c);
    };
}

/**
 * Write a limit function that allows a binary function to be called a limited number of times
 * I don't know how to do this one
 */

function limit(func, count) {
    return function (a, b) {
        if (count >= 1) {
            count -= 1;
            return func(a, b);
        }

        return undefined;
    }
}

/**
 * Write a from function that produces a generator that will produce a aeries of vaues
 */

function from(next, value) {
    return function(a) {
        if (value >= 1) {
            value += 1;
            return next(value);
        }
    }

    return undefined;
}

// actual answer
function from(start) {
    return function () {
        let next = start;
        start += 1;
        return next;
    };
}
