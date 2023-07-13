/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function (n) {
	const arr = [];

	for (let i = 1; i <= n; i++) {
		let elem = "";

		if (!!!(i % 3)) elem = "Fizz";

		if (!!!(i % 5)) elem += "Buzz";

		if (!!(i % 3) && !!(i % 5)) elem = `${i}`;

		arr.push(elem);
	}

	return arr;
};
