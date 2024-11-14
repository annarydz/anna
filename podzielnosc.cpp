#include <iostream>
#include <algorithm>
using namespace std;

int main()
{	int x,y;
	cin>>x>>y;
<<<<<<< HEAD
	if(x>0 && y>0)
	{	cout<<x<<" "<<y;
	}
	else
	{	cout<<"Nie podano dodatnich wartosci"<<endl;
	}
=======
	cout<<x<<" "<<y<<" "<<__gcd(x,y);
>>>>>>> obliczenia
return 0;
}
