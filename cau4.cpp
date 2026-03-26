#include<iostream>
using namespace std;
/*
    Class Date
    chức năng:
        Lưu trữ thông tin ngày, tháng, năm
        và xử lý tính ngày tiếp theo
*/
class Date{
private:
    long long ngay, thang, nam;
public:
    /*
        Hàm nhập
        Input:
            Nhập ngày, tháng, năm hợp lệ
        Output:
            Lưu giá trị vào biến trong class
    */
    void nhap(){
        do{
            cin >> ngay >> thang >> nam;
        }
        while (ngay <= 0 || thang <= 0 || nam <= 0 || ngay > 31 || thang > 12);
    }
    /*
        Hàm ktnam
        Input:
            năm
        Output:
            1: năm nhuận
            0: không nhuận
    */
    int ktnam(){
        if ((nam % 400 == 0) || (nam % 100 != 0 && nam % 4 == 0))
            return 1;
        return 0;
    }
    /*
        Hàm ktthang
        Output:
            1: tháng 31 ngày
            0: tháng 30 ngày
            2: tháng 2
    */
    int ktthang(){
        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
            thang == 8 || thang == 10 || thang == 12)
            return 1;
        else if (thang == 2)
            return 2;
        else
            return 0;
    }
    /*
        Hàm ngayKeTiep
        Output:
            In ra ngày tiếp theo
        Chức năng:
            Xử lý toàn bộ logic ngày tháng năm
    */
    void ngayKeTiep(){
        // Tháng 2
        if (ktthang() == 2){
            if (ktnam()){ // năm nhuận
                if (ngay < 29) ngay++;
                else if (ngay == 29){
                    ngay = 1;
                    thang = 3;
                }
                else{
                    cout << "Loi";
                    return;
                }
            }
            else{ // không nhuận
                if (ngay < 28) ngay++;
                else if (ngay == 28){
                    ngay = 1;
                    thang = 3;
                }
                else{
                    cout << "Loi";
                    return;
                }
            }
        }

        // Tháng 31 ngày
        else if (ktthang() == 1){
            if (ngay < 31) ngay++;
            else if (ngay == 31){
                ngay = 1;
                if (thang == 12){
                    thang = 1;
                    nam++;
                }
                else thang++;
            }
            else{
                cout << "Loi";
                return;
            }
        }
        // Tháng 30 ngày
        else{
            if (ngay < 30) ngay++;
            else if (ngay == 30){
                ngay = 1;
                thang++;
            }
            else{
                cout << "Loi";
                return;
            }
        }
        // In kết quả
        cout << "ngay :" << ngay << endl;
        cout << "thang :" << thang << endl;
        cout << "nam :" << nam;
    }
};
int main(){
    /*
        Input:
            Nhập ngày tháng năm
        Output:
            In ra ngày tiếp theo
    */
    Date d;
    d.nhap();
    d.ngayKeTiep();
    return 0;
}
