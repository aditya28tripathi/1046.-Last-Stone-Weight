class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {

    

        if(stones.size()==1)
         return stones[0];
        
        priority_queue<int> q;

        int max1,max2;
        
        for(int i=0;i<stones.size();i++)
         q.push(stones[i]);

        while(q.size()>1){

            max1=q.top();
            q.pop();
            max2=q.top();
            q.pop();

            if(max1!=max2)
             q.push(max1-max2); 

        }

        if(!q.empty())
         return q.top();

        return 0;
    }
};
