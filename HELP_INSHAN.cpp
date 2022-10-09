/*Ishaan has been given a task by his teacher. 
He needs to find the Nth term of a series. His teacher gives him some examples to help 
him out (Refer examples below). He is a bit weak in pattern searching so to help him his
teacher told him that the Nth term is related to prime numbers. The Nth term is the difference of 
N and the closest prime number to N. Help him find the Nth term for a given N.
 

Example 1:

Input: N = 10
Output: 1
Explanation: Closest prime to 10 is 11.
Example 2:

Input: N = 7
Output: 0
Explanation: Closest prime to 7 is 7.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function NthTerm() which takes N as input paramater and returns Nth term.
 

Expected Time Complexity: O(N* √ N)
Expected Space Complexity: O(1)

Constraints:
1 <= N <= 100000*/

#include <iostream>
using namespace std;
class Solution{
public:
	int Check_Prime(int N){
		int count=0;
		for (int i = 1; i <= N ; i++)
		{
			if (N%i==0)
			{
				count++;
			}
		}
		if (count==2)
		{
			return 1;
		}
		else {
			return 0;
		}
	}
	int NthTerm(int N){
		int i=N,j=N;
		while(Check_Prime(i)!=1 or Check_Prime(j)!=1){
			cout<<i<<" "<<j<<endl;
			if (Check_Prime(i)==1 )
			{
				break;
			}
			if (Check_Prime(j)==1)
			{
				break;
			}
			
			i++;
			j--;
		}
		if (i-N>N-j)
		{
			return N-j;
		}
		else{
			return i-N;
		}
	}
};

int main(){
	Solution Solve;
	int n=20;// We have to find closest prime number to n;
	cout<<Solve.NthTerm(n);
	/*
	if (Solve.Check_Prime(n)==1)
	{
		cout<<"PRIME";
	}
	else{
		cout<<"NOT PRIME";
	}*/
	return 0;
}
