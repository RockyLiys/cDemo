
long factorial(int n);   //Ԥ������
int sum();
int _max(int a, int b);
int Mfree();
int demo();

typedef char (*PTR_TO_ARR)[30];   //����
typedef int (*PTR_TO_FUNC)(int, int);

const char str[3][30] = {
    "http://c.biancheng.net",
    "C����������",
    "C-Language"
};
const char g_ro[] = {"save to ro data segment"};
const char g_rw[] = {"save to rw data segment"};
int g_bss[100];//save to bss segment

// binary_search
int binary_search(const int Array[], int X, int N);
// ŷ������㷨
unsigned int Gcd(unsigned int M,unsigned int N);
// ����X^N���㷨��ʹ��N-1
int IsEven(unsigned int N); // �Ƿ�Ϊ������ż��
long int Pow(long int X, unsigned int N);



