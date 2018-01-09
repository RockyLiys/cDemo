#include <stdio.h>
#include <stdlib.h>
#include "helloworld.h"

int Mfree(){  
    int l_stack;//stack 4bytes  
    char l_stack_1[100];//stack 100bytes  
    char * l_stack_2 = "this string save to ro data segment,but l_stack_2 save to stack(4bytes)";  
    char * l_stack_3;//l_stack_3 save to stack(4bytes)  
    char  l_stack_4[] = {"this string save to ro data segment,but l_stack_4 save to stack(4bytes)"};  
  
    static char l_rw[] = {"save to rw data segment"};  
    static char l_bss[100];//save to bss segment  
    static int l_rw_1 = 1;//save to rw data segment  
  
    char * m_p = (char *) malloc(100*sizeof(char));//save to heap  
    free(m_p);  
      
    return 0;   
}
int demo(){
    PTR_TO_ARR parr = str;
    PTR_TO_FUNC pfunc = _max;
    int i;
   
    printf("_max: %d\n", (*pfunc)(10, 20));
    for(i=0; i<3; i++){
        printf("str[%d]: %#X==>%#X-->len%d  %s\n", i, parr, parr+i, sizeof(*(parr+i)), *(parr+i));
    }
    int a=2, b=3;
    b=a^b;
    a=a^b;
    b=a^b;
    printf("%d-%d", a, b);
    return 0;
}
long factorial(int n){
    long result;
    if(n==0 || n==1){
        result = 1;
    }else{
        result = factorial(n-1) * n;  // �ݹ����
    }
    return result;
}
int sum(){
    int i, sum=0;
    for(i=1; i<=100; i++){
        sum+=i;
    }
    return sum;
}
int _max(int a, int b){
    return a>b ? a : b;
}

int binary_search(const int A[], int X, int N){
	/*
		A param  sorted array
		X param  X in A 
		N param  A lenght  
	*/
	int Low, Mid, High;
	Low = 0; High = N - 1;
	while(Low <= High){
		Mid = (Low + High)/2;
		if(A[Mid] < X){
			Low = Mid + 1;
		}else if(A[Mid] > X){
			High = Mid -1;
		}else{
			return Mid;
		}
	}
	return -1;
	
}

/*
ŷ������㷨��շת����
ԭ�� gcd(a,b)=gcd(b,a mod b)
��bΪ0ʱ�����������Լ����Ϊa
getchar()�����ǰһ��scanf�Ļس���
*/
unsigned int Gcd(unsigned int M, unsigned int N){
    unsigned int Rem;
    while(N > 0)
    {
        Rem = M % N;
        M = N;
        N = Rem;
    }
    return M;
}

int IsEven(unsigned int N){
	int flag = 0;
	if( N%2==0 ){
		flag = 1;
	}
	return flag;
}

/*
	ƽ���㷨 
*/
long int Pow(long int X, unsigned int N){
	if(N==0){
		return 1;
	}
	if(N==1){
		return X;
	}
	if( IsEven(N) ){
		return Pow(X*X, N/2);
	}else{
		return Pow(X*X, N/2)*X;
	}
}


