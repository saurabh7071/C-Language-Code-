
/*
	
	realloc() function : 
						Sometimes the dynamically allocated memory is insufficient or more than required..
						
						realloc is used to allocate memory of new size using the previous pointer and
						size..
						
			Syntax : 
					 ptr = realloc(ptr,new size);
					 
					 ptr = realloc(ptr,3*sizeof(int));
					 						|
					 						|
					 						|
					 				ptr now points to this new block of memory capable of storing 
					 					3 