#include <iostream>
using namespace std;
int main()
{
	int m; 
	int n;
	char c;
	

	while(c!='t')
	{
	  cout<<"TYPE YOUR FIRST NUMBER"<<endl;
      cin>>m;	
      cout<<"TYPE YOUR SECOND NUMBER"<<endl;
      cin>>n;
	  cout<<"TYPE A FOR DIVISION"<<endl;
	  cout<<"TYPE B FOR MULTIPLICATION"<<endl;
	  cout<<"TYPE C FOR ADDITION"<<endl;
	  cout<<"TYPE D FOR SUBTRACTION"<<endl;
	  cout<<"TYPE E FOR REMAINDER"<<endl;
	  cout<<"TYPE T FOR TERMINATE"<<endl;
	
	    cin>>c;
		if(c=='a')

		cout<<"DIVISION"<<(int)m/(int)n<<endl;
		else if(c=='b')
		cout<<"MULTIPLICATION"<<(int)m*(int)n<<endl;
		else if(c=='c')
		cout<<"ADDTION"<<(int)m+(int)n<<endl;
		else if(c=='d')
		cout<<"SUBTRACTION"<<(int)m-(int)n<<endl;
		else if(c=='e')
		cout<<"REAMINDER"<<(int)m%(int)n<<endl;
		else
		cout<<"Program End";
	
	}
	return 0;
}
