#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct SinhVien{
    string Hoten;// họ và tên sinh viên
    double diemtoan; // điểm môn toán
    double diemvan; // điểm môn văn
};
/*
   tạo Struct SinhVien
    chức năng:
        Lưu thông tin của một sinh viên gồm:
        - Họ tên
        - Điểm toán
        - Điểm văn
*/
int main (){
SinhVien A[1];
cout<<"nhap ho va ten : ";
getline(cin,A[0].Hoten);
cout<<"nhap diem toan :";
cin>>A[0].diemtoan;
cout<<"nhap diem van :";
cin>>A[0].diemvan;
double tmp = (A[0].diemtoan+A[0].diemvan)/2;
   /*
        Input:
            - Nhập họ tên sinh viên ( dạng chuỗi )
            - Nhập điểm toán ( dạng số thực)
            - Nhập điểm văn ( dạng số thực)
        Output:
            - In ra họ tên sinh viên
            - In ra điểm trung bình (DTB)
        Chức năng:
            - Lưu thông tin sinh viên
            - Tính điểm trung bình của 2 môn
    */
cout<<"Ho va ten : "<<A[0].Hoten
<<endl<<"DTB :"<<tmp;
/*
        - In ra họ tên 
        - In ra điểm trung bình
*/
}