char* odd_num_zeros(int* string) {
	int state_changes;
	int state;
	char* state_definition;

	state_changes = 0;
	
	while(string){
		if(string* == 0){
			state_changes++;
			string++;
		}
		else if(string* == 1){
			string++;
		}
		else {
			error;
		}
	{
	state = state_changes % 2;
	if(state == 1){
		state_definition = "odd number of zeros";
	}
	else if (state == 0){
		state_definition = "even number of zeros";
	}
	else{
		error;
	}
	return(state_definition);
}
