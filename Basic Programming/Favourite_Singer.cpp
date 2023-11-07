/*
Bob has a playlist of N songs, each song has a singer associated with it (denoted by an integer)

Favourite singer of Bob is the one whose songs are the most on the playlist

Count the number of Favourite Singers of Bob

Input Format

The first line contains an integer N, denoting the number of songs in Bob's playlist.

The following input contains N integers, i th integer denoting the singer of the i th song.

Output Format

Output a single integer, the number of favourite singers of Bob

Note: Use 64 bit data type

Constraints

1 <= N <= 2 * 10 ^ 5

1 <= a[i] <= 10 ^ 15

Sample Input

5
1 1 2 2 4

Sample Output
2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Num_song;
    cin >> Num_song;
    unordered_map<long long, int> m;
    for (int i = 0; i < Num_song; i++)
    {
        long long x;
        cin >> x;
        m[x] = m[x] + 1;
    }
    int max_most_repeated_song = 0;
    for (auto ptr : m)
    {
        max_most_repeated_song = max(max_most_repeated_song, ptr.second);
    }

    int faourite_Singer_count = 0;
    for (auto pr : m)
    {
        if (pr.second >= 2)
        {
            faourite_Singer_count++;
        }
    }

    cout << faourite_Singer_count;
    return 0;
}