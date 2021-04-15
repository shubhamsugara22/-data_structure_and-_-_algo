#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
#define d 256

// p->pattern
//txt ->text
// q->a prime number

void search(char pat[], char txt[], int q)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0;
    int t = 0;
    int h = 1;

    for (i = 0; i < M - 1; i++)
    {
        h = (h * d) % q;
    }
    for (i = 0; i < M; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
}

int main()
{
    char txt[] = "GEEKS FOR GEEKS";
    char pat[] = "GEEK";

    int q = 101;

    search(pat, txt, q);
    return 0;
}