/*
Problem

You are provided an array A of size N that contains non-negative integers. Your task is determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by 10.

Note: View the sample explanation section for more clarification.

Input format
First line: A single integer N denoting the size of array A ⚫ Second line: N space-separated integers.

Output format
If the number is divisible by 10, then print Yes. Otherwise, print No.

Constraints
1 < N < 10 ^ 5
0 <= A[i] <= 10 ^ 5

Sample Input
5
85 25 65 21 84

Sample Output
No


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N], sum[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        sum[i] = arr[i] % 10;
    }
    // cout << sum;
    if (sum[N - 1] == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    // cout << "done";

    return 0;
}