class Solution {
public:
    class node{
    public:
    int data;
    int row;
    int col;

    node(int d, int r, int c){
        data = d;
        row = r;
        col = c;
    }

};
class compare{
    public:
    bool operator()(node *a, node* b){
        return a->data > b->data;
    }
};
    vector<int> smallestRange(vector<vector<int>>& nums) {
        
    int mini = INT_MAX;
    int maxi = INT_MIN;

    priority_queue<node *, vector<node*>, compare> minHeap;

    //hr list k 1st ele ko insert
    int k = nums.size();
    for(int i=0;i<k;i++){
        int element = nums[i][0];
        maxi = max(maxi,element);
        mini  = min(mini,element);
        minHeap.push(new node(element, i , 0));

    }

    int ansStart = mini;
    int ansEnd = maxi;

    while(!minHeap.empty()){
        node* top = minHeap.top();
        int topElement = top->data;
        int topRow = top->row;
        int topCol = top->col;
        minHeap.pop();

        //mini updates
        mini = topElement;

        //check for answer
        int currRange = maxi-mini;
        int ansRange = ansEnd - ansStart;
        if(currRange < ansRange){
            ansStart = mini;
            ansEnd = maxi;
        }

        //check for new ele in th same list
        if(topCol +1 < nums[topRow].size()){
            maxi = max(maxi,nums[topRow][topCol+1]);
            node* newNode = new node(nums[topRow][topCol+1],topRow,topCol+1);
            minHeap.push(newNode);
        }
        else{
            //there is no ele in same list or arr
            break;
        }
    }

    vector<int>ans;
    ans.push_back(ansStart);
    ans.push_back(ansEnd);
    return ans;
}


    
};