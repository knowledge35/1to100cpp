#include <iostream>
#include <conio.h>
using namespace std;
int main()
{//1 den 100 kadar olan tek sayilari bastirin
	for(int a=1; a<100; a++){
		if(a%2==1){
			cout<<a<<endl;
		}
	}
   getch();
   return 0;
}
