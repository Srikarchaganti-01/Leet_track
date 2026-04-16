// Last updated: 4/16/2026, 11:34:12 PM
class Solution {
public:
    bool isLeap(int y){
        return (y%400 == 0) || ( y%4 == 0 && y%100 !=0);
    }
    int countdays(int y,int m,int d){
        int count = 0;
        for(int i=1971;i<y;i++){
            if(isLeap(i)){
                count = count + 366;
            }else count = count + 365;
        }
        int mdays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        for(int i = 1;i<m;i++){
            if(i == 2 && isLeap(y)) count = count + 29;
            else count  = count + mdays[i-1];
        }
        count = count + d;
        return count;
    }
    int daysBetweenDates(string date1, string date2) {
        int y1 = stoi(date1.substr(0,4));
        int y2 = stoi(date2.substr(0,4));
        int m1 = stoi(date1.substr(5,2));
        int m2 = stoi(date2.substr(5,2));
        int d1 = stoi(date1.substr(8,2));
        int d2 = stoi(date2.substr(8,2));
        int num1 = countdays(y1,m1,d1);
        int num2 = countdays(y2,m2,d2);
        return abs(num1 - num2);
    }
};