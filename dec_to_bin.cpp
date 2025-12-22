#include<iostream>
using namespace std;
int dectobin(int decmalnum){
    int ans=0;
    int power=1;
    while(decmalnum>0){
        int reaminder=decmalnum%2;
        decmalnum/=2;
        ans+=(reaminder*power);
    }

    return ans;

}
int mian(){
    int decmalnum=5;
   cout<< dectobin(decmalnum);
    return 0;
}

