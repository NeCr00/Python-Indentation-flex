#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "expression.h"



void initArray(struct Array *a, size_t initialSize) {
  a->array = (struct  Variable *)malloc(initialSize * sizeof(struct Variable));
  a->used = 0;
  a->size = initialSize;
}

void insertArray(struct Array *a, struct Variable element) {
  // a->used is the number of used entries, because a->array[a->used++] updates a->used only *after* the array has been accessed.
  // Therefore a->used can go up to a->size 
  if (a->used == a->size) {
    a->size *= 2;
    a->array = (struct Variable *)realloc(a->array, a->size * sizeof(struct Variable));
  }
  a->array[a->used++] = element;
}

void freeArray(struct Array *a) {
  free(a->array);
  a->array = NULL;
  a->used = a->size = 0;
} 



struct Variable value_assign (struct Variable var, struct Variable num, struct Array *a){
	
	delete(a,var);
	var = find_value(a, var,0);
	
	num = find_value(a, num,0);
	

	if(num.type == INTEGER){
		var.ival = num.ival;
		printf("111111111111111132323\n\n\n\n");
		var.type = INTEGER;	}

	else if(num.type == FLOAT){
		var.fval = num.fval;
		var.type = FLOAT;	}
	else{
		strcpy(var.string,num.string);
		var.type = STRING;	}

 	var.data_type = VAR;

return var;
	
}

struct Variable add_calc (struct Variable num1 , struct Variable num2, struct Array *a)
{ 	
	if(num1.type == IDENT )
		num1 = find_value(a,num1,1);

	if(num2.type == IDENT )
		num2 = find_value(a,num2,1);

	if ( num1.type != num2.type){

		if(num1.type == INTEGER && num2.type == FLOAT){
			num2.fval = (float)num1.ival + num2.fval;
			return num2;	}

		else if(num2.type == INTEGER && num1.type == FLOAT){
			num1.fval = (float)num2.ival + num1.fval; 
			return num1;	}
		
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}
			
												}
								
		
	else {
		if(num1.type == INTEGER){
			num1.ival = num1.ival + num2.ival;
			return num1;
						}
		else if(num1.type == FLOAT){
			num1.fval = num1.fval + num2.fval;	
			return num1;		}
							
		else{	
			if(num1.string[0] == '"'){
				memmove(&num1.string[0], &num1.string[1], strlen(num1.string));
				num1.string[strlen(num1.string)-1] = 0;}
			if(num2.string[0] == '"'){
				memmove(&num2.string[0], &num2.string[1], strlen(num2.string));
				num2.string[strlen(num2.string)-1] = 0;}
			strcat(num1.string,num2.string);
			return num1;		}

	}								
}

struct Variable minus_calc (struct Variable num1 , struct Variable num2, struct Array *a)
{ 	
	if(num1.type == IDENT )
		num1 = find_value(a,num1,1);

	if(num2.type == IDENT )
		num2 = find_value(a,num2,1);

	if ( num1.type != num2.type){

		if(num1.type == INTEGER && num2.type == FLOAT){
			num2.fval = (float)num1.ival - num2.fval;
			return num2;	}

		else if(num2.type == INTEGER && num1.type == FLOAT){
			num1.fval = (float)num2.ival - num1.fval; 
			return num1;	}
		
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}
	}
								
		
	else {
		if(num1.type == INTEGER){
			num1.ival = num1.ival - num2.ival;
			return num1;
						}
		else if(num1.type == FLOAT){
			num1.fval = num1.fval - num2.fval;	
			return num1;		}
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}

	}								
}		

struct Variable div_calc (struct Variable num1 , struct Variable num2, struct Array *a)
{ 	
	if(num1.type == IDENT )
		num1 = find_value(a,num1,1);

	if(num2.type == IDENT )
		num2 = find_value(a,num2,1);

	if ( num1.type != num2.type){

		if(num1.type == INTEGER && num2.type == FLOAT){
			num2.fval = (float)num1.ival / num2.fval;
			return num2;	}

		else if(num2.type == INTEGER && num1.type == FLOAT){
			num1.fval = (float)num2.ival / num1.fval; 
			return num1;	}
		
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}
	}
								
		
	else {
		if(num1.type == INTEGER){
			num1.ival = num1.ival / num2.ival;
			return num1;
						}
		else if(num1.type == FLOAT){
			num1.fval = num1.fval / num2.fval;	
			return num1;		}
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}

	}								
}


struct Variable mul_calc (struct Variable num1 , struct Variable num2, struct Array *a)
{ 	
	if(num1.type == IDENT )
		num1 = find_value(a,num1,1);

	if(num2.type == IDENT )
		num2 = find_value(a,num2,1);

	if ( num1.type != num2.type){

		if(num1.type == INTEGER && num2.type == FLOAT){
			num2.fval = (float)num1.ival * num2.fval;
			return num2;	}

		else if(num2.type == INTEGER && num1.type == FLOAT){
			num1.fval = (float)num2.ival * num1.fval; 
			return num1;	}
		
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}
	}
								
		
	else {
		if(num1.type == INTEGER){
			num1.ival = num1.ival * num2.ival;
			return num1;
						}
		else if(num1.type == FLOAT){
			num1.fval = num1.fval * num2.fval;	
			return num1;		}
		else{
			fprintf(stderr, "Data type error: unsupported operand type(s)");
			exit(1);	}

	}								
}


void print ( struct Variable num, struct Array *a){
	
	if(num.type == IDENT)
		num = find_value(a,num,1);
		
	if(num.type == INTEGER)
		printf("%d\n",num.ival);
	
	else if (num.type == FLOAT)
		printf("%f\n",num.fval);

	else{	
		if(num.string[0] == '"'){
			memmove(&num.string[0], &num.string[1], strlen(num.string));
			num.string[strlen(num.string)-1] = 0;	}
		printf("%s\n",num.string);
									} 

}

struct Variable find_value(struct Array *a, struct Variable num,int check){
	int i=0;
	//struct Variable temp
	while(i<a->used){
		
		if(strcmp(a->array[i].name,num.name) ==0){
			a->array[i].data_type = VAR;
			return a->array[i];
		}
		i++;					
	}
	if(check){
	fprintf(stderr, "Error: Variable %s has not been defined !",num.name);
	exit(1);}
	return num;
}

void delete (struct Array *a, struct Variable num){
	int i=0;
	struct Variable temp;
	while(i<a->used){
		
		if(strcmp(a->array[i].name,num.name) ==0){
			a->array[i]=temp	;		
		}
		i++;					
	}

}

void items(struct Array *dic,struct Array *a){
	int i=0;
	printf("{");
	while(i< dic->used){
		if(i % 2 ==0){
			printf("(");
			print_dictionary(dic->array[i],a);}
		else{
			print_dictionary(dic->array[i],a);
			printf(")");}
		i++;	
		if(i< dic->used)
			printf(",");
	}
	printf("}\n");
}

void print_dictionary(struct Variable item,struct Array *a){
	if(item.type == IDENT)
		item = find_value(a,item,1);
		
	if(item.type == INTEGER)
		printf("%d",item.ival);
	
	else if (item.type == FLOAT)
		printf("%f",item.fval);

	else
		printf("%s",item.string);
}
