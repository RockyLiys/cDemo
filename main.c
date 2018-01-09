#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//sum();
	//demo();
	const int array[] = {1,2,4,5,6,7,8,9, 66,88,100};
	int a_len = sizeof(array)/sizeof(array[0]);
	int mid = binary_search(array, 100, a_len);
	printf("位置在Mid==%d\n", mid+1);
	int gcd = Gcd(1995, 615);
	printf("最大公约数 =%d \n", gcd);
	long int pow;
	pow = Pow(2, 31);  //mingw32-make.exe  32位 
	printf("平方pow =%ld", pow);
	return 0;
}

