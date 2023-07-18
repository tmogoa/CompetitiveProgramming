function countSwaps(a) {
	// Write your code here
	let swaps = 0;
	for (let i = 0; i < a.length; i++) {
		for (let j = 0; j < a.length - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a, j);
				swaps++;
			}
		}
	}

	console.log(`Array is sorted in ${swaps} swaps.`);
	console.log(`First Element: ${a[0]}`);
	console.log(`Last Element: ${a[a.length - 1]}`);
}

function swap(a, indexOfLeft) {
	const left = a[indexOfLeft];
	a[indexOfLeft] = a[indexOfLeft + 1];
	a[indexOfLeft + 1] = left;
}
