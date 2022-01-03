class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long a=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++)
        {
            if(a>=asteroids[i])
            a=a+asteroids[i];
            else
            return false;
        }
        return true;
    }
};
