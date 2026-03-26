#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
class PhanSo{
public:
    long long tuso;
    long long mauso;
};
//Dùng để lưu trữ một phân số gồm tử số và mẫu số
long long rutgon(long long a ,long long  b ){
    a=abs(a);//lấy giá trị tuyệt đối để khi tìm ra UCLN luôn dương khi xuất ra kết quả nếu đầu vào tử là số âm không bị nhảy xuống dưới
    b=abs(b);
    while ( b!=0){
        long long  tmp= a%b;//biến nhớ tạm để lưu giá trị 
        a=b; //gán giá trị của b hiện tại cho a để chuẩn bị cho vòng lặp tiếp theo 
        b=tmp;//gán giá trị của biến tạm lúc nãy cho biến b chuẩn bị cho vòng lặp tiêp theo
    }
    return a;
}
 // tính năng: Hàm này dùng để tìm ƯCLN của hai số nguyên bằng thuật toán Euclid.
 // Đầu vào (Input): 
 // Biến a (long long) là giá trị tử  của phân số.
 // Biến b (long long): là giá trị mẫu của phân số.
int main (){
PhanSo A[1];
    cin>>A[0].tuso>>A[0].mauso;
long long  tam= rutgon(A[0].tuso, A[0].mauso);
cout << A[0].tuso/tam<<"/"<<A[0].mauso/tam;
}
