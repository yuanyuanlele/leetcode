class Solution {
public:
    bool checkString(string s) {
        int index=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
            index=i;
            break;
            }
        }
        if(s[index]=='b')
        {
        for(int i=index+1;i<s.size();i++)
         {
            if(s[i]=='a')
            return false;
         }
        }
        return true;
    }
};
