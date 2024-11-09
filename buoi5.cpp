#include<iostream>

using namespace std;

bool soHoanThien(int a){
	 if (n <= 1) return false;  // Các số nhỏ hơn hoặc bằng 1 không phải là số hoàn hảo
    
    int sum = 0;
    
    // Tính tổng các ước của số n (ngoại trừ chính nó)
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {  // Nếu i là ước của n
            sum += i;
        }
    }
    
    // Kiểm tra nếu tổng các ước bằng chính số n
    return sum == n;
};
bool soNguyeTo(int a);
bool soChinhPhuong(int a);
bool soChan(int a);

int main()
{
	int a;
	cout << "Nhap so can kiem tra: ";
	cin >> a;


if (sohoanthien(a))
	cout << a << " la so hoan thien";
else
	cout << a << " khong la so hoan thien";

}