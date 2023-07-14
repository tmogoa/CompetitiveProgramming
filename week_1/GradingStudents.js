/**
 *
 * @param {*} grades
 * @returns Array
 */
function gradingStudents(grades) {
	const roundedGrades = [];

	grades.forEach((grade) => {
		if (grade < 38) return roundedGrades.push(grade);

		const qountient = Math.floor(grade / 5);

		const nextMultiple = (qountient + 1) * 5;
		const difference = nextMultiple - grade;

		if (difference < 3) return roundedGrades.push(nextMultiple);

		roundedGrades.push(grade);
	});

	return roundedGrades;
}
