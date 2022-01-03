class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prenum=0;
        int curnum=0;
        int sum=0;
        for(int i=0;i<bank.size();i++)
        {
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                curnum++;
            }
            if(prenum!=0)
            {
            sum+=curnum*prenum;
            }
            if(curnum!=0)
            {
                prenum=curnum;
            }
            curnum=0;
        }
        return sum;
    }
};
