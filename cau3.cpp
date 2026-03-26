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
void In(long long c, long long d){
    cout<<c/rutgon(c,d)<<"/"<<d/rutgon(c,d)<<endl;
}
/*
Input: 
c: là tu so cua ket qua sau khi rut gon
d: là mau so cua ket qua khi rut gon
Output:
in ra các kết quả đã rút gọn
*/
// chức năng : in ra kết quả dưới dạng c/d
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
PhanSo Tong[1];
PhanSo Hieu[1];
PhanSo Tich[1];
PhanSo Thuong[1];
//dùng để khai báo các mảng chứa kết quả của tôngr , hiệu , tích , thương 
    Tong[0].tuso=A[0].tuso*A[1].mauso+A[1].tuso*A[0].mauso;
        Tong[0].mauso=A[0].mauso*A[1].mauso;
        //tính tổng
            Hieu[0].tuso=A[0].tuso*A[1].mauso-A[1].tuso*A[0].mauso;
                Hieu[0].mauso=A[0].mauso*A[1].mauso;
                //tính hiệu
                //chức năng : dùng để quy đồng 2 phân số để tính tổng hiệu
cout<<"tong la :";
In(Tong[0].tuso,Tong[0].mauso);
// in ra tổng
cout<<"hieu la :";
In(Hieu[0].tuso,Hieu[0].mauso);
//in ra hiệu 
    Tich[0].tuso=A[0].tuso*A[1].tuso;
        Tich[0].mauso=A[0].mauso*A[1].mauso;
cout<<"tich la :";
In(Tich[0].tuso,Tich[0].mauso);
 //in ra tích 
    Thuong[0].tuso=A[0].tuso*A[1].mauso;
        Thuong[0].mauso=A[0].mauso*A[1].tuso;
                if(Thuong[0].mauso==0){
                    cout<<"Loi!";
                    //dùng để xét khi kết quả phân số sau khi chia có mẫu băng 0
}
                else {
                      cout<<"thuong la :";
                        In(Thuong[0].tuso,Thuong[0].mauso);
                        //dùng để in ra kết quả của thương
}
    return 0 ; 
}