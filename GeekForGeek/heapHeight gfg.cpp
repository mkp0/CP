class Solution{
public:
    int heapHeight(int N, int arr[]){
        int h = 0,i = 2;
        while(i<=N)
        {
            h++;
            i*=2;
        }
        return h;
    }
};