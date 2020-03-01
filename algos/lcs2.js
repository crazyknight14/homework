

//Rush Line
//SID# W840830
//CSC 413 Homework 4
//Problem 2c




function lcs(n, m){
	let arr = [];
	let row, col;
	let count = 0;

	for (row = -1; row < n.length + 1; ++row){
		arr[row] = [];
		for (col = -1; col < m.length + 1; ++col){
			arr[row][col] = 0;
		}
	}

	let log = "  " + m + "\n";

	for (row = 0; row < n.length; ++row) {
		log += n[row] + " ";

		for (col = 0; col < m.length; ++col) {
			if (m[col] == n[row]) {
				arr[row][col] = arr[row - 1][col - 1] + 1;
			} else {
				arr[row][col] = Math.max(
					arr[row - 1][col],
					arr[row][col - 1]
				);
			}

			log += arr[row][col];
		}

		log += "\n";
	}

	console.log(log);


	row = n.length;
	col = m.length;
	//console.log(arr);

	let str = "";

	while (row > 0 || col > 0) {
		if (m[col - 1] == n[row - 1]) {
			//console.log(1);
			str = m[col - 1] + str;
			++count;
			col--;
			row--;
		} else if (arr[row][col] == arr[row][col - 1]) {
			//console.log(2);
			col--;
		} else {
			//console.log(3);
			row--;
		}
		//console.log(arr);
	}
	console.log(count);
	return str;
}

console.log(lcs("GATTAGA", "ATTGAG"));
