#include <iostream>
using namespace std ;
int main() {
 long long num;
 cout << "請輸入卡號:"; 
 cin >> num;
 int str1 = num/10000000000000;
 int str2 = num/100000000000000;
 int str3 = num/1000000000000000;
 int str4 = num/1000000000000;
 int str5 = num/100000000000000;
 if(str1 == 34 || str1 == 37){
    cout<<"American Express";
    for (int i = 0; i <= 15; i++){
     int first = num / 10;
     int second = num / 10000;
     cout << first;
    }
 }else if (str2 == 51||str2 == 52||str2 == 53||str2 == 54||str2 == 55) {
    cout<<"MasterCard";
 }else if (str3 == 4||str4 == 4){
    cout<<"Visa";
 }else{
    cout<<"無效";
 }
}
