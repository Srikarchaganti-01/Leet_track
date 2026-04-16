// Last updated: 4/16/2026, 11:33:23 PM
class Solution {
public:
    string trafficSignal(int timer) {
        if(timer == 0) return "Green";
        else if(timer == 30) return "Orange";
        else if (timer > 30 && timer <= 90)return "Red";
        return "Invalid";
    }
};