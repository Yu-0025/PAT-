#include<iostream>
using namespace std;

int main()
{
    char m;
    int n, i=0, im;
	int s = 0;
    cin >> n >> m;
    int sum = -1;
    for (i=1; i<100; i++)
    {
    	s = sum+4*i-2;
        if(  s <= n )
            sum = sum +4*i - 2;
        else break;
    }
    // cout << sum;
    im = i-1;    
    for(int i=im; i>=1; i--)
    {
    	int imm = (im-i);
    	while(imm>0)
		{
			cout << " ";
			imm--;
		}
		
        for(int y=1; y<=2*i-1; y++)
            cout << m ;
        cout << endl; 
    }
    for(int i = 2; i<im; i++)
    {
    	int imm = (im-i);
		   	while(imm>0)
			{
				cout << " ";
				imm--;
			}
        for(int y=1; y<=2*i-1; y++)
            cout << m ;
        cout << endl;        
    }
    if(im>1)
    {
		for(int j=1; j<=2*im-1; j++)
		    cout << m ;
		cout << endl;
	}
    
    cout << n-sum ;
}
