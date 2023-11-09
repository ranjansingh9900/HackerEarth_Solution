/*
Problem

You are required to enter a word that consists of and y that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if 2x = y
Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzoooo0.

Input format
• First line: A word that starts with several Zs and continues by several Os. Note: The maximum length of this word must be 20.

Output format
Print Yes if the input word can be considered as the string zoo otherwise, print No.

Sample Input
zzzoooooo

Sample Output
Yes

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count_Z = 0, count_O = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'z')
        {
            count_Z++;
        }
        else if (str[i] == 'o')
        {
            count_O++;
        }
    }

    // cout << count_Z << " " << count_O;

    if (count_O == (2 * count_Z))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}