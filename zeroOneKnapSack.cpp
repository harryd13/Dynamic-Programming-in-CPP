#include <iostream>
#include <algorithm>

using namespace std;
int Knapsack(int wt[], int val[], int W, int n)
{
    //base condition
    if (n == 0 || W == 0)
        return 0;
    //choice diagram code
    if (wt[n - 1] <= W)
    {
        return std::max((val[n - 1] + Knapsack(wt, val, W - wt[n - 1], n - 1)), Knapsack(wt, val, W, n - 1));
    }
    else
    {
        return Knapsack(wt, val, W, n - 1);
    }
}
int main()
{
    int n = 4;
    int val[n] = {6, 3, 2, 4};
    int wt[n] = {2, 2, 2, 2};
    int W = 4;
    cout << Knapsack(wt, val, W, n) << endl;

    return 0;
}
