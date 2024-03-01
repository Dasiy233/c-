/*在柠檬水摊上，每一杯柠檬水的售价为 5 美元。
顾客排队购买你的产品，（按账单 bills 支付的顺序）一次购买一杯。

每位顾客只买一杯柠檬水，然后向你付 5 美元、10 美元或 20 美元。
你必须给每个顾客正确找零，也就是说净交易是每位顾客向你支付 5 美元。

注意，一开始你手头没有任何零钱。

给你一个整数数组 bills ，其中 bills[i] 是第 i 位顾客付的账。
如果你能给每位顾客正确找零，返回 true ，否则返回 false 。*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int m1 = 0; // 目前5元有0张
        int m2 = 0; // 目前10元有0张
        int m3 = 0; // 目前20元有0张
        int len = bills.size();
        for(int i = 0; i < len; i++) {
            switch(bills[i]) {
                case 5: //直接收，不找钱
                    m1++;
                    break;
                case 10: //收10，找5，或返回false
                    if(m1 > 0) {
                        m1--;
                        m2++;
                    } else {
                        return false;
                    }
                    break;
                case 20: //收20，找10+5或5+5+5，或返回false
                    if(m1 > 0) { 
                        if(m2 >0) {
                            m1--;
                            m2--;
                            m3++;
                        }else {
                            if(m1 > 2) {
                                m1 -= 3;
                                m3++;
                            } else {
                                return false;
                            }
                        }
                    }  else { //必须有个五块
                        return false;
                    }
                    break;
            }
        }
        return true;
    }   
};
