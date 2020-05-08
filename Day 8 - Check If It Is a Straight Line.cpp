class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()<=2) return true;
        float m = 1.0 * (coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);
        cout<<m<<" ";
        for(int i=2; i<coordinates.size(); i++){
            if((1.0*(coordinates[i][1]-coordinates[i-1][1])/(coordinates[i][0]-coordinates[i-1][0]))!=m) return false;
        }
        return true;
    }
};
