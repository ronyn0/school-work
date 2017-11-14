// Example program
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int numSum(int n);
int sumof2Rands();
void replaceRand(int &a, int &b);

int main()
{
    
    for(int i = 1; i < 1000; i++)   {
        if(numSum(i) == 20)
            cout << i << endl;
    }
    return 0;
}
int numSum(int n)   {
    int total = 0;
    while (n > 0)   {
            total += n%10;
            n /=10;
    }
    return total;
}
int sumof2Rands()   {
    return ((rand() % 6 + 1) + (rand() % 6 + 1));
}
void replaceRand(int &a, int &b)  [
    a = rand() % 6 + 1);
    b = rand() % 6 + 1);

}
