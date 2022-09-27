#include"alloc.h"
#include<vector>
#include<ctime>
#include<chrono>

using namespace std;
using namespace chrono;

struct node
{
    int a;
    int b;
    int c;
    int d;
    int f;
    int g;
    // int nums[];
};

typedef node type;
#define times 100;
vector<type, myAllocator<type>> vec1;
vector<type> vec2;
int main(){
    vector<int, myAllocator<int>> nums;
    nums.push_back(1);
    return 0;
}
