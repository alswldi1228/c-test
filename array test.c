#include <stdio.h>

void mergeArr(int *, int , int *, int , int *, int);
int increase(int , int);
int decrease(int , int);


int main(){
	
	int a[7] = {5, 11, 27, 55, 1, 3, 4};
	int b[7] = {16, 23, 17, 10, 13, 15, 14};
	int c[14], cnt;

	mergeArr(a, 7, b, 7, c, 0);

	for(cnt = 0; cnt < 14; cnt++)
		printf("%d ", c[cnt]);

	return 0;
		
}

void mergeArr(int *a, int sizeA, int *b, int sizeB, int *c, int mode){
	
	int cnt, cursor, target, temp;
	int (*compare)(int , int);
	
	for(cnt = 0, cursor = 0; cnt < sizeA; cnt++, cursor++)
		c[cursor] = a[cnt];
	
	for(cnt = 0; cnt < sizeB; cnt++, cursor++)
		c[cursor] = b[cnt];
		
	if(mode != 1 && mode != 0){
		
		printf("Invalid mode!\n");
		return;
		
	}
	
	for(cursor = 0; cursor < sizeA + sizeB; cursor++){
		
		target = cursor;
		
		for(cnt = cursor + 1; cnt < sizeA + sizeB; cnt++){
			
			if(mode == 0){
				
				if(c[target] < c[cnt])
					target = cnt;
				
			}
			else if(mode == 1){
				if(c[target] > c[cnt])
					target = cnt;
				
			}
		}
		
		temp = c[cursor];
		c[cursor] = c[target];
		c[target] = temp;
		
	}
	
	
	//	function pointer È°¿ë 
	/*
	if(mode == 0)
		compare = decrease;
	else if(mode == 1)
		compare = increase;
	else{
		
		printf("Invalid mode!\n");
		return;
		
	}
	
	for(cursor = 0; cursor < sizeA + sizeB; cursor++){
		
		target = cursor;
		
		for(cnt = cursor + 1; cnt < sizeA + sizeB; cnt++){
			
			if(!compare(c[target], c[cnt]))
				target = cnt;
			
		}
		
		temp = c[cursor];
		c[cursor] = c[target];
		c[target] = temp;
		
	}
	*/

}


int increase(int a, int b){
	
	if(a <= b)
		return 1;
	else 
		return 0;
	
}

int decrease(int a, int b){
	
	if(b <= a)
		return 1;
	else 
		return 0;
	
}
