
long factorial(int n);   //预处理函数
int sum();
int _max(int a, int b);
int Mfree();
int demo();

typedef char (*PTR_TO_ARR)[30];   //别名
typedef int (*PTR_TO_FUNC)(int, int);

const char str[3][30] = {
    "http://c.biancheng.net",
    "C语言中文网",
    "C-Language"
};
const char g_ro[] = {"save to ro data segment"};
const char g_rw[] = {"save to rw data segment"};
int g_bss[100];//save to bss segment

// binary_search
int binary_search(const int Array[], int X, int N);
// 欧几里德算法
unsigned int Gcd(unsigned int M,unsigned int N);
// 计算X^N的算法是使用N-1
int IsEven(unsigned int N); // 是否为奇数，偶数
long int Pow(long int X, unsigned int N);



