#include <stdio.h>
int a=1;
int i=1;
int b=1;
int t=5;
void hello() {
	
			while(i<10)
			{
				printf ("hello №%i \n ",i);
				i=i+1;
			}}
			

void number()
{
	
	while(a<16)
	{
		printf("\n %i",a); a=a+1;
		
	}}

void chetn(){
	while(b<16) {
		
		if(b % 2 != 0){
			printf ("\n    %i ",b);
		}b=b+1;}}
void zdn_two()
{
	while(t<16)
	{
		printf("\n    %i ",t);
		t=t+5;
	}
}




int main(void){ hello(), chetn(),number(),zdn_two();
	
	return 0;
}