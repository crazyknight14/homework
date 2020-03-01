
let arr = [2, 3, 1, 4, 5];
let k = 3;

function kDiff(arr, k){
	let count = 0;
	for(let i = 0; i < arr.length; ++i){
		for(let j = 0; j < arr.length; ++j){
			
			if(Math.abs(arr[i] - arr[j]) === k){

				++count;
			}
		}
	}
	return (count/2);
}	
console.log(arr);
console.log(kDiff(arr, k));