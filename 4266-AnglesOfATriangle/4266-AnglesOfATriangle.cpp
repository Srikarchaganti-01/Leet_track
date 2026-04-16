// Last updated: 4/16/2026, 11:33:25 PM
class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>v;
        sort(sides.begin(),sides.end());
        if(sides[0] + sides[1] <= sides[2]) return v;
        double a = acos((pow(sides[0],2)+pow(sides[2],2) - pow(sides[1],2)) / (2 * sides[0] * sides[2]));
        double b = acos((pow(sides[0],2)+pow(sides[1],2) - pow(sides[2],2)) / (2 * sides[0] * sides[1]));
        double c = acos((pow(sides[1],2)+pow(sides[2],2) - pow(sides[0],2)) / (2 * sides[2] * sides[1]));
        double ra = a * (180.0/M_PI);
        double rb = b * (180.0/M_PI);
        double rc = c * (180.0/M_PI);
        v.push_back(ra);
        v.push_back(rb);
        v.push_back(rc);
        sort(v.begin(),v.end());
        return v;
    }
};