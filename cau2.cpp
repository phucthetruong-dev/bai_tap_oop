#include<iostream>
#include<cmath>
using namespace std;
struct PhanSo{
    long long tuso;
    long long mauso;
};
//Dùng để lưu trữ một phân số gồm tử số và mẫu số
long long rutgon(long long a , long long b){
         a=abs(a);//lấy giá trị tuyệt đối để khi tìm ra UCLN luôn dương khi xuất ra kết quả nếu đầu vào tử là số âm không bị nhảy xuống dưới
         b=abs(b);
         while (b!=0){
                long long tmp=a%b;//biến nhớ tạm để lưu giá trị 
                a=b;//gán giá trị của b hiện tại cho a để chuẩn bị cho vòng lặp tiếp theo 
                b=tmp;//gán giá trị của biến tạm lúc nãy cho biến b chuẩn bị cho vòng lặp tiêp theo
    }
    return a;
}
 // tính năng: Hàm này dùng để tìm ƯCLN của hai số nguyên bằng thuật toán Euclid.
 // Đầu vào (Input): 
 // Biến a (long long) là giá trị tử  của phân số.
 // Biến b (long long): là giá trị mẫu của phân số.
int main(){
    PhanSo A[2];
    // tạo mảng để Nhập 2 phân số
    for (int i =0 ; i<2 ; i++){
        cin>>A[i].tuso; 
        do{
            cin>>A[i].mauso;
      }
         while (A[i].mauso==0);
    }
// vòng lặp để đảm bảo nhập mẫu số khác 0
    for ( int i =0 ; i<2 ;i++){
        long long tam=rutgon(A[i].tuso, A[i].mauso);
        A[i].tuso=A[i].tuso/tam;
        A[i].mauso=A[i].mauso/tam;
    }
    //dùng để Rút gọn 2 phân số
    if ((double)A[0].tuso/A[0].mauso<(double)A[1].tuso/A[1].mauso){
       cout<<A[1].tuso<<"/"<<A[1].mauso;
    }
    else if((double)A[0].tuso/A[0].mauso==(double)A[1].tuso/A[1].mauso){
        cout<<"hai so bang nhau";
    }
        // So sánh 2 phân số:
        // Ép về kiểu double để so sánh giá trị
    else {
        cout<<A[0].tuso<<"/"<<A[0].mauso;
    }
    return 0 ; 
}