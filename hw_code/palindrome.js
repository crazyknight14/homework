
str = "leel";
function pal(str){
	for (let i = 0; i < str.length; ++i){
		console.log(str[i] + "=" + str[str.length - (i + 1)])
		if(str[i] != str[str.length - (i+1)]){
			return false;
		}
	}
	return true;
}



console.log(pal(str));