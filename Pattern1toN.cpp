/*
https://www.hackerrank.com/challenges/printing-pattern-2/problem

4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4       
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, present_num;
    cin>>n;
    int limit = 2*n-1;

    for(int i=1; i<=limit; i++)
    {
        present_num = n;
        for(int j=1; j<=limit; j++)
        {
            cout<<present_num<<" ";

            if(j<i)
                present_num--;
                
            if(j > ((2*n) - 1 - i))
                present_num++;

        }
        cout<<endl;
    }

    return 0;
}