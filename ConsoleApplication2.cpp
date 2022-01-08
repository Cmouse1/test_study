// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


typedef struct BiTNode
{
    int data;
    struct BiTNode* lchild, * rchild;
}BiTNode, *BiTree;



void test2()
{
    int iNums[9] = { 70, 105, 115, 104, 67, 46, 99, 111, 109 };

}

struct BinaryTreeNode
{
    int value;
    BinaryTreeNode* m_pLeft, * m_pRight, *m_pParent;
};


// 递归和循环
int add_Recursive(int n)
{
    return n <= 0 ? 0 : n + add_Recursive(n - 1);
}

int RandomInRange(int start, int end)
{
    return start + rand() % (end - start + 1);
}

template<typename T> 
void Swap(T* a, T* b)
{
    T tmp;
    tmp = *a;
    *b = tmp;
    *a = *b;
}

int Partition(int* data, int length, int start, int end)
{
    if (data == nullptr || length <= 0 || stat < 0 || end >= length)
    {
        throw new std::exception("Invalid Parameters");
    }

    int index = RandomInRange(start, end);
    Swap(&data[index], &data[end]);

    int small = start - 1;
    for (index = start; index < end; index++)
    {
        if (data[index] < data[end])
        {
            small++;
            if (small != index)
            {
                Swap(&data[small], &data[index]);
            }
        }
    }
    
    small++;
    Swap(&data[small], &data[end]);
    return small;
}

void QuickSort(int* data, int length, int start, int end)
{
    if (start == end)
    {
        return;
    }

    int index = Partition(data, length, start, end);
    if (index > start)
    {
        QuickSort(data, length, start, index - 1);
    }
    if (index < end)
    {
        QuickSort(data, length, index + 1, end);
    }
}

void test3()
{

}

int main()
{
    
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
