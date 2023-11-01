#include <iostream>
#include <iomanip>
#include <time.h> 
using namespace std;
void Create(int* x, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        x[i] = Low + rand() % (High - Low + 1);
}
int Sum(int* x, const int size, int& k) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if ((x[i] < 0) && (!(x[i] % 3 == 0))) {
            s += x[i];
            x[i] = 0;
            k++;
        }
    }
    return s;
}
void Print(int* x, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << x[i];
    cout << endl;
}
int main()
{
    srand((unsigned)time(NULL));
    int k = 0;
    const int n = 24;
    int x[n];

    int Low = -17;
    int High = 53;

    Create(x, n, Low, High);
    Print(x, n);
    cout << "Sum: " << Sum(x, n, k) << ", Count: " << k << endl;
    Print(x, n);

    return 0;
}