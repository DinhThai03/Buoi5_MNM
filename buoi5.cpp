#include<iostream>

using namespace std;

bool soHoanThien(int a);
bool soNguyeTo(int a)
{
	if(a < 2)
		return false;
	for(int i =0 ; i <= sqrt(a); i++)
		if(a%i == 0)
			return false;
	return true;
	
}
bool soChinhPhuong(int a);
bool soChan(int a);

int main()
{
	int a;
	cout << "Nhap so can kiem tra: ";
	cin >> a;

	if (soNguyeTo(a))
		cout << a << " la so nguyen to";
	else
		cout << a << " khong la so nguyen to";

}