#include<iostream>

using namespace std;

bool soNguyeTo(int a);
bool soHoanThien(int a);
bool soChinhPhuong(int a){
	int temp = sqrt(a);
	if(temp*temp==a)
		return true;
	return false;
}
bool soChan(int a);
int main()
{
	
	if (soChinhPhuong(a))
		cout << a << " la so chinh phuong";
	else
		cout << a << " khong la so chinh phuong";

}