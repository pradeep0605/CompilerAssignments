
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include "string.cpp"
#include "symtab.cpp"


using namespace std;


unsigned int getRandomValue()
{
 
   return (rand()*time(NULL));
}


int main(int argc, char **argv)
{
	symtab ST=symtab(100);
	
	system("./irgen > rand.ir");
	ifstream in("rand.ir",ios::binary);
	in.seekg(0,ios::end);
	unsigned int fileSize=in.tellg();
	in.seekg(0,ios::beg);
	String s=String(fileSize);
	in.read((char*)s.str,fileSize);
	unsigned int no_tokens=0, no_blocks=0;
	String *tokens=s.tokenize('\n',no_tokens);
	
	for(int i=0;i<no_tokens;i++)
	{
		if(tokens[i].indexOf((char*)":") !=-1)
		{
		   	ST.addSymbol(tokens[i]);
			no_blocks++;
		}
	}
	
	
	String *blocks=new String[2*no_blocks];
        unsigned int blockIndex=0;	
	int i=0;
	
			
	
	return 0;			
}





/*      To find whether the used labels are defined or not 

	for(int i=0;i<no_tokens;i++)
	{
		if(tokens[i].indexOf((char*)"goto") !=-1)
		{
			unsigned int n=0;
			String *tptokens=tokens[i].tokenize(' ',n);
			for(int k=0;k<n;k++)
			{
				if(tptokens[k].indexOf((char*)"goto")!=-1)
				{
					if(! ST.find( tptokens[k+1] + (char*)":"))
					{
						error=true;
						cout<<"Label undefined at line :"<<k+2<<"\t"<<tptokens[k+1]<<endl; 
					}
				}
			}	
		}
	}*/


