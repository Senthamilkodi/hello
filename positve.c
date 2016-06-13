#include <stdio.h>

int main() {
	int no;
	scanf("%d",&no);
	if(no>0)
		printf("%d is a pos",no);
		else if(no<0)
		printf("%d is a neg",no);
		else
		printf("%d is zero",no);
}
