#include<iostream>
using namespace std;
int main(){
    int reminder,orignalNum, num, sum=0;
    cout<<"enter a value"<<endl;
    cin>>num;
    orignalNum = num;
    while(num>0){
        reminder = num%10;
        sum = sum+(reminder*reminder*reminder);
        num = num/10;
    }
    if(orignalNum == sum){
        cout<<"The value is a armstrong number"<<endl;
    }
    else{
        cout<<"The value is not a armstrong number"<<endl;
    }

    return 0;
}
