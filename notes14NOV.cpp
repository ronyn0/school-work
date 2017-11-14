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
void coinToss() {
    srand(time(NULL));
    
    cout << "If you do a thousand coin tosses you could see: " << endl;
    int counter = 1, prev = rand() % 2;
    int count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    for(int i = 0; i < 1000; i++)   {
        int next = rand() % 2;
        if(next == prev) {counter++;}
        else {
            switch(counter) {
                case 6: count6++; break;
                case 7: count7++; break;
                case 8: count8++; break;
                case 9: count9++; break;
                default: break;
            }
            counter = 1;
        }
        prev = next;
    }
    cout << "6 in a row: " << count6 << "\n7 in a row: " << count7 
        << "\n8 in a row: " << count8 << "\n9 in a row: " << count9 << endl;
}
