#include <iostream> 
using namespace std;
int main(){
	int hour;
	cout<<"enter hour:"<<endl;
	cin>>hour;
	int min;
	cout<<"enter minute:"<<endl;
	cin>>min;
	int seconds;
	cout<<"enter seconds"<<endl;
	cin>>seconds;
	int z= hour*3600 + min*60 +seconds;
	cout<<"total seconds:"<<z<<endl;
	return 0;
}
