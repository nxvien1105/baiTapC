#include <stdio.h>
#include <stdlib.h>
#include "tinhtoan.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1000, b=12;
	printf("\nTong hai so la %d",cong(a,b));
	printf("\nHieu hai so la %d",tru(a,b));
	printf("\nTich hai so la %d",nhan(a,b));
	printf("\nThuong hai so la %f",chia(a,b));
	return 0;
}
