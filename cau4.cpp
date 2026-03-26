#include<iostream>
using namespace std;
long long ktnam(int n){
    if ((n%400==0)||(n%100!=0&&n%4==0))return 1;
  else return 0;
}
/*
    Hàm ktnam
    Input:
        n: là năm (số nguyên)
    Output:
        - Trả về 1 nếu là năm nhuận
        - Trả về 0 nếu không phải năm nhuận
    Chức năng:
        Kiểm tra năm nhuận theo quy tắc: 1 năm là năm nhuận nếu nó
        - Chia hết cho 400 
        - Hoặc chia hết cho 4 nhưng không chia hết cho 100 
*/
long long ktthang(int n){
    if (n == 1||n==3||n == 5||n==7||n==8||n==10||n==12)return 1;
      else if(n==2)return 2;
          else return 0;  
}
/*
    Hàm ktthang
    Input:
        n: nhập tháng( kiểu dữ liệu số nguyên )
    Output:
        - Trả về 1: tháng có 31 ngày
        - Trả về 0: tháng có 30 ngày
        - Trả về 2:  nếu đó là tháng 2
    Chức năng:
        Phân loại số ngày của từng tháng 
*/
void In(long long  a ,long long  b , long long c){
  if(ktthang(b)==1){
      if (a<31){
        cout<<"ngay :"<<a+1<<endl<<"thang :"<<b<<endl<<"nam :"<<c;
   }
     else if (a==31&&b==12){
        cout<<"ngay :"<<1<<endl<<"thang :"<<1<<endl<<"nam :"<<c+1;
   }
      else if (a==31){
         cout<<"ngay :"<<1<<endl<<"thang :"<<b+1<<endl<<"nam :"<<c;
      }
      else{
        cout<<"Loi";
      }
     }
     else if(ktthang(b)==0)  {
            if (a<30){
               cout<<"ngay :"<<a+1<<endl<<"thang :"<<b<<endl<<"nam :"<<c;
   }
      else if (a==30){
               cout<<"ngay :"<<1<<endl<<"thang :"<<b+1<<endl<<"nam :"<<c;
   }
      else{
          cout<<"loi";
     }
   }
}
/*
    Hàm In
    Input:
        a: ngày
        b: tháng
        c: năm
    Output:
        In ra ngày kế tiếp (không xử lý tháng 2 vì còn mắc ở 28 hoặc 29 ngày )
    Chức năng:
        Xử lý in ra ngày tiếp theo cho:
        - Tháng có 30 ngày
        - Tháng có 31 ngày
*/
int main (){
    long long ngay,thang,nam ;
    do{
    cin>>ngay>>thang>>nam;//nhập vào ngày , tháng , năm 
    }
    while (ngay<=0||thang<=0||nam<=0||ngay>31||thang>12);
    // hàm dùng để kiểm tra việc ngày tháng năm có hơp lệ hay không
if (ktnam(nam)==1){
   In(ngay, thang , nam);
    if ( ktthang(thang)==2){
        if (ngay<29){
          cout<<"ngay :"<<ngay+1<<endl<<"thang :"<<thang<<endl<<"nam :"<<nam;
   }
        else if (ngay==29){
          cout<<"ngay :"<<1<<endl<<"thang :"<<3<<endl<<"nam :"<<nam;
   }
      else{
          cout<<"loi";
      }
     }
   }
   //hàm dùng để in ra ngày tháng năm tiếp theo nếu năm đó là năm nhuận
  else if(ktnam(nam)==0){
    In(ngay, thang , nam);
     if ( ktthang(thang)==2){
        if (ngay<28){
          cout<<"ngay :"<<ngay+1<<endl<<"thang :"<<thang<<endl<<"nam :"<<nam;
   }
        else if (ngay==28){
          cout<<"ngay :"<<1<<endl<<"thang :"<<3<<endl<<"nam :"<<nam;
   }
      else{
          cout<<"loi";
      }
     }
  }
  //hàm dùng để in ra ngày tiếp theo nếu nnăm đó là năm không nhuận
     /*
        Input:
            Nhập ngày, tháng, năm 
        Output:
            In ra ngày tiếp theo
        Chức năng:
            - Kiểm tra năm nhuận hay không nhuận
            - Xử lý riêng tháng 2 mà trong hàm trên ko có 
            - Gọi hàm In cho các tháng còn lại 
    */
     return 0 ;
  }