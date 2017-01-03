
#include<iostream>
#include<stdlib.h>
#include "string.cpp"

using namespace std;

unsigned int getRandomValue()
{
 
   return (rand()*time(NULL));
}


int main(int argc, char **argv)
{
	String s=argv[1];
	unsigned short a[1000][1000], b[1000][1000], c[1000][1000];
	int n=s;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
		   	a[i][j] = getRandomValue()%10000;
		   	b[i][j] = getRandomValue()%10000;
		   	c[i][j]=0;
		}	
		   	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		 	for(int k=0;k<n;k++)
		 	   c[i][j]+= a[i][k]* b[k][j];
		 	
	return 0;
}
