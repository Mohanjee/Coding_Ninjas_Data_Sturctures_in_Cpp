Pairs with difference K
You are given with an array of integers and an integer K. Write a program to find and print all pairs which have difference K.
Take difference as absolute.
Input Format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Line 3 : K
Output format :
Print pairs in different lines (pair elements separated by space). In a pair, smaller element should be printed first.
(Order of different pairs is not important)
Constraints :
0 <= n <= 10^4
Sample Input 1 :
4 
5 1 2 4
3
Sample Output 1 :
2 5
1 4
Sample Input 2 :
4
4 4 4 4 
0
Sample Output 2 :
4 4
4 4
4 4
4 4
4 4
4 4


/*************************************************************** SOLUTION ****************************************************************/

#include <bits/stdc++.h>

int getPairsWithDifferenceK(int *arr, int n, int k) {
    unordered_map<int, int> mp;
      
        int ans = 0;
        for(int i = 0; i<n; i++) {
          if(k != 0) ans += mp[arr[i] + k] + mp[arr[i] - k];
        	else ans += mp[arr[i]];
          mp[arr[i]]++;
        }
      
        return ans;
}
