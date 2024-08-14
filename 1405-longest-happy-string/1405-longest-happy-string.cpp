class Solution {
public:
    
    class node{
    public:
    char data;
    int count;

    node(char d, int c){
      data  = d;
      count = c;
    }
  };
    
   class compare{
    public:
    bool operator()(node a, node b){
        return a.count < b.count;
    }
   };
    
    string longestDiverseString(int a, int b, int c) {
            priority_queue<node, vector<node>, compare> maxHeap;
            if(a>0){
                node temp ('a',a); 
                maxHeap.push(temp);
            }
            if(b>0){
                node temp ('b',b); 
                maxHeap.push(temp);
            }
             if(c>0){
                node temp ('c',c); 
                maxHeap.push(temp);
            }
        
        
        string ans = "";

        while(maxHeap.size()>1){
            node first = maxHeap.top();
            maxHeap.pop();
            node second = maxHeap.top();
            maxHeap.pop();
            
            if(first.count>2){
                ans = ans+first.data;
                ans+=first.data;
                first.count = first.count-2;
            }else{
                ans = ans+first.data;
                first.count--;
            }
            
            if(second.count>2  && first.count<=second.count){
                ans = ans+second.data;
                ans+=second.data;
                second.count = second.count-2;
            }else{
                ans = ans+second.data;
                second.count--;
            }
            
            if(first.count>0){
                maxHeap.push(first);
            }
            if(second.count>0){
                maxHeap.push(second);
            }
            
            
            

        }
        
        if(maxHeap.size()==1){
            node temp = maxHeap.top();
            maxHeap.pop();
            
            if(temp.count>=2){
                ans += temp.data;
                ans += temp.data;
                temp.count -=2;
            }
            else{
                ans += temp.data;
                temp.count--;
            }
        }
        
        return ans;
    }
};