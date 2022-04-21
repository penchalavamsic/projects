#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
 
 int main( int argc, char *argv[])
 
 {
 	float value1,value2,answer;
 	char operators;
 	printf("Available Operators\n""Division   /\n""Multiplication *\n"
             "Addition  +\n" "Subraction   -\n""Powerof   ^\n"   "Squareroot  square\n" );       
	           
	            
	            
	            
	            
	            
 	printf("Enter the Calculation:\n\n");
 	scanf("%f %c %f",&value1, &operators, &value2);
 	
 	switch(operators)
 	{
 		case '/': answer = value1/value2;
 		break;
 		
 		case '*': answer = value1*value2;
 		break;
 		case '+': answer = value1+value2;
 		break;
 		case '-': answer = value1-value2;
 		break;
 		case '^': answer = pow(value1,value2);
 		break;
 		case 'square': answer = sqrt(value1),sqrt(value2);
 		break;
 		default:goto fail;
 		
	 }
	 printf("%.9g%c%.9g = %.6g\n\n",value1,operators,value2,answer);
	 goto exit;
	 fail:
	 	printf("Fail\n");
	 	exit:
	 		return 0;
 }
